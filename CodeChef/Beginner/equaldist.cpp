// https://www.codechef.com/submit-v2/EQUALDIST
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int a, b;
		cin>>a>>b;
		if((a+b)%2==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}