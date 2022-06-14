// https://www.codechef.com/submit-v2/RECTSQ
#include<iostream>

using namespace std;


int gcd(int a, int b){
	int result = a > b ? a : b;
	while(true){
		if(a%result == 0 && b%result == 0){
			break;
		}
		result--;
	}
	return result;
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int N, M;
		cin>>N>>M;
		int plots = (N*M)/(gcd(N, M)*gcd(N, M));
		cout<<plots<<endl;
	}
	return 0;
}
