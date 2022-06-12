// https://www.codechef.com/submit-v2/MODULO3
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
	int a, b;
	cin>>a>>b;
	int ops = 0;
	while(a%3 != 0 && b%3 != 0){
		if((b-abs(a-b))%3 == 0){
			a = abs(a-b);
		}else{
			b = abs(a-b);
		}
		ops+=1;
	}
	cout<<ops<<endl;
	}
	return 0;
}
