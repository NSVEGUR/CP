// https://www.codechef.com/submit-v2/SOLBLTY
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int x, a, b;
		cin>>x>>a>>b;
		int quantity = a + (100 - x) * b;
		cout<<quantity*10<< endl;
	}
	return 0;
}
