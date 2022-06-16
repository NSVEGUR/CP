// https://www.codechef.com/submit-v2/THREEQ
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int expected[3];
		int answered[3];
		int e = 0, a = 0;
		for(int i = 0; i < 3; i++){
			cin>>expected[i];
		}
		for(int i = 0; i < 3; i++){
			cin>>answered[i];
		}
		for(int i = 0; i < 3; i++){
			if(expected[i] == 1){
				e+=1;
			}
			if(answered[i] == 1){
				a+=1;
			}
		}
		if(e == a){
			cout<<"Pass"<<endl;
		}else{
			cout<<"Fail"<<endl;
		}
	}
	return 0;
}
