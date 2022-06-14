// https://www.codechef.com/submit-v2/TWOVSTEN
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int X, count;
		cin>>X;
		count = 0;
		if(X%5 == 0){
			while(X%10!=0){
				count++;
				X *=2;
			}
			cout<<count<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
