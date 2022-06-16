// https://www.codechef.com/submit-v2/MARARUN
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int D, d, A, B, C;
		cin>>D>>d>>A>>B>>C;
		int able = d*D;
		if(able < 10){
			cout<<0<<endl;
		}else if(able>=10 && able < 21){
			cout<<A<<endl;
		}else if(able>=21 && able < 42){
			cout<<B<<endl;
		}else{
			cout<<C<<endl;
		}
	}
	return 0;
}
