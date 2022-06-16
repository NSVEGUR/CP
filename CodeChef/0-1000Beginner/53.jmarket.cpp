// https://www.codechef.com/submit-v2/JMARKET
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int X, A, B, C;
		cin>>X>>A>>B>>C;
		int a = min(A, min(B, C));
		int b;
		int c = max(A, max(B, C));
		if(A == a && C == c){
			b = B;
		}else if(A == a && B == c){
			b = C;
		}
	}
	return 0;
}
