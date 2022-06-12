// https://www.codechef.com/submit-v2/FOOTCUP
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
	int a, b;
	cin>>a>>b;
	if(a >= 1 && b >= 1 && a == b){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	}
	return 0;
}
