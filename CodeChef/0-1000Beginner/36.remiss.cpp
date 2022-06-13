// https://www.codechef.com/submit-v2/REMISS
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int a, b;
		cin>>a>>b;
		int max = a > b ? a : b;
		cout<<max<<" "<<a+b<<endl;
	}
	return 0;
}
