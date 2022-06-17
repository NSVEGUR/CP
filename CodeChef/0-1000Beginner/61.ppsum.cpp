// https://www.codechef.com/submit-v2/PPSUM
#include<iostream>

using namespace std;

int sum(int n){
	return (n*(n+1))/2;
}

int sumD(int N, int D){
	if(D == 1)
		return sum(N);
	else
		return sum(sumD(N, --D));
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int D, N;
		cin>>D>>N;
		cout<<sumD(N, D)<<endl;
	}
	return 0;
}
