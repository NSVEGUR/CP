// https://www.codechef.com/submit-v2/CHEFSLP
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n, l, x;
		cin>>n>>l>>x;
		if(n-l<l)l = n-l;
		cout<<l*x<<endl;
	}
	return 0;
}
