// https://www.codechef.com/submit-v2/OLYRANK
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int G1, S1, B1, G2, S2, B2;
		cin>>G1>>S1>>B1>>G2>>S2>>B2;
		int A, B;
		A = G1+S1+B1;
		B = G2+S2+B2;
		if(A > B){
			cout<<1<<endl;
		}else{
			cout<<2<<endl;
		}
	}
	return 0;
}
