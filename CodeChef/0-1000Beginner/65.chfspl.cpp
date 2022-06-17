// https://www.codechef.com/submit-v2/CHFSPL
#include<iostream>
#include<algorithm>

using namespace std;

int max(int a, int b, int c){
	return max(a, max(b, c));
}

int secondMax(int a, int b, int c){
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
		int A, B, C;
		cin>>A>>B>>C;
		int a = max(A, B, C);
		int b = secondMax(A, B, C);
		cout<<a+b<<endl;
	}
	return 0;
}
