// https://www.codechef.com/submit-v2/CREDITS
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int credits;
		cin>>credits;
		if(credits>65){
			cout<<"OVERLOAD"<<endl;
		}else if(credits<35){
			cout<<"UNDERLOAD"<<endl;
		}else{
			cout<<"NORMAL"<<endl;
		}
	}
	return 0;
}
