// https://www.codechef.com/submit-v2/SAVWATER
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int H, x, y, C;
		cin>>H>>x>>y>>C;
		int consumed;
		consumed = (x + y/2)*H;
		if(consumed <= C){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
