// https://www.codechef.com/submit-v2/SHOEFIT
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a == 0 || b == 0 || c == 0){
			if(a == 1 || b == 1 || c == 1){
				cout<<1<<endl;
				continue;
			}
		}
		cout<<0<<endl;
	}
	return 0;
}