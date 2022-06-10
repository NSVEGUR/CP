// https://www.codechef.com/submit-v2/MANIPULATE

#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
	int x, y;
	cin>>x>>y;
	if(y<=x){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	}
	return 0;
}
