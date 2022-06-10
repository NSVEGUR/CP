// https://www.codechef.com/submit-v2/CABS

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int x, y;
		cin>>x>>y;
		if(x==y){
			cout<<"ANY"<<endl;
		}
		else if(x<y){
			cout<<"FIRST"<<endl;
	 }else{
		 cout<<"SECOND"<<endl;
	 }
	}
	return 0;
}