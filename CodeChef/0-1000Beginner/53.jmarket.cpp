// https://www.codechef.com/submit-v2/JMARKET
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int firstMin(int a, int b, int c){
	return min(a, min(b, c));
}

int secondMin(int a, int b, int c){
	if((b >= a && a >= c)||(c >= a && a >= b))
		return a;
	else if((a >= b && b >= c) || (c >= b && b >= a))
		return b;
	else
		return c;
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int X, A, B, C;
		cin>>X>>A>>B>>C;
		int a = firstMin(A, B, C);
		int b = secondMin(A, B, C);
		int money = a + b;
		X-=2;
		cout<<money + X * a<<endl;
	}
	return 0;
}
