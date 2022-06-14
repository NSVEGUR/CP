// https://www.codechef.com/submit-v2/CHFCLASS
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N, days;
		cin>>N;
		days = N / 7;
		if(N%7==6){
			days+=1;
		}
		cout<<days<<endl;
	}
	return 0;
}
