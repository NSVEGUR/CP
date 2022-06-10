// https://www.codechef.com/submit-v2/BATTERYLOW
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
	int x;
	cin>>x;
		if(x<=15){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
