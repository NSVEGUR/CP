// https://www.codechef.com/submit-v2/TRUESCORE
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
	int a, b;
	int c, d;
	cin>>a>>b;
	cin>>c>>d;
	if(a<=c&&b<=d){
		cout<<"POSSIBLE"<<endl;
	}else{
		cout<<"IMPOSSIBLE"<<endl;
	}
	}
	return 0;
}
