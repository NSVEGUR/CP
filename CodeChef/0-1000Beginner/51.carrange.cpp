// https://www.codechef.com/submit-v2/CARRANGE
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int P, M, V;
		cin>>P>>M>>V;
		int people = P - 1;
		int milage = M - people;
		cout<<milage*V<<endl;
	}
	return 0;
}
