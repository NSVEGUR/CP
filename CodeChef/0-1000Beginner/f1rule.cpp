// https://www.codechef.com/submit-v2/F1RULE

#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int x, y, z;
		cin>>x>>y;
		z = 1.07 * x;
		if(y<=z){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
