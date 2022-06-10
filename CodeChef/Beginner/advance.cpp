// https://www.codechef.com/submit-v2/ADVANCE

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int x, y;
		cin>>x>>y;
		if(y>=x&&y<=(x+200)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}