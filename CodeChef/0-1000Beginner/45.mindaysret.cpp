// https://www.codechef.com/submit-v2/MINDAYSRET
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N, K;
		cin>>N>>K;
		int days;
		days = N / K;
		if(N%K!=0){
			days++;
		}
		cout<<days<<endl;
	}
	return 0;
}
