// https://www.codechef.com/submit-v2/DIGARR
#include<iostream>
#include<string>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		string str;
		cin>>str;
		int flag = 0;
		for(int i = 0; i < N; i++){
			int digit = str[i] - 48;
			if(digit == 0 || digit == 5){
				flag = 1;
				break;
			}
		}
		if(flag)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
