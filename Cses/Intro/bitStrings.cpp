#include<iostream>
#include<cmath>
using namespace std;

#define l1 long long int
const l1 MOD = 1e9 + 7;

l1 powerLong(l1 a, l1 b){
	l1 result = 1;
	while(b){
		if(b&1)
			result = (result * a)%MOD;
		b = b/2;
		a = (a*a)%MOD;
	}
	return result;
}


int main(){
	l1 a = 2, b;
	cin>>b;
	cout<<powerLong(a, b)<<"\n";
	return 0;
}