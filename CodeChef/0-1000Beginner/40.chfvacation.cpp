// https://www.codechef.com/submit-v2/CHEFVACATION
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int X, Y, Z;
		cin>>X>>Y>>Z;
		if(X+Y<=Z){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
