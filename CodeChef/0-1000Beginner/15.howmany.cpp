// https://www.codechef.com/submit-v2/HOWMANY
#include<iostream>

using namespace std;

int main(){
	int n, digits = 0;
	cin>>n;
	while(n){
		n = n/10;
		digits+=1;
	}
	if(digits == 1){
		cout<<1<<endl;
	}else if(digits == 2){
		cout<<2<<endl;
	}else if(digits == 3){
		cout<<3<<endl;
	}else{
		cout<<"More than 3 digits"<<endl;
	}
	return 0;
}
