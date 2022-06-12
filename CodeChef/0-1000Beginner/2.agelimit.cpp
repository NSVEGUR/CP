// https://www.codechef.com/submit-v2/AGELIMIT

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n){
		int X,Y,A;
		cin>>X>>Y>>A;
		if(A<Y&&A>=X){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		n-=1;
	}
	return 0;
}