// https://www.codechef.com/submit-v2/AVOIDCONTACT
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int x, y, healthy;
		cin>>x>>y;
		healthy = x - y;
		if(healthy==0){
			cout<<2*y - 1 <<endl;
		}
		else{
			cout<<2*y + healthy<<endl;
		}
	}
	return 0;
}
