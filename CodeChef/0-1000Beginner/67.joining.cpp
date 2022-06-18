// https://www.codechef.com/submit-v2/JOINING
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N, K;
		cin>>N>>K;
		int leftOver;
		if(K%5 == 0){
			leftOver = N - K;
		}else{
			leftOver = N -  (K + (5 - K%5));
		}
		if(leftOver > 0){
			if(leftOver%5 == 0){
				cout<<leftOver/5<<endl;
			}else{
				cout<<leftOver/5 + 1<<endl;
			}
		}else{
			cout<<0<<endl;
		}
	}
	return 0;
}