// https://www.codechef.com/submit-v2/CHFPROFIT
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int X, Y, Z;
		cin>>X>>Y>>Z;
		cout<<(Z-Y)*X<<endl;
	}
	return 0;
}
