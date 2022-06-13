// https://www.codechef.com/submit-v2/MARBLES
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long long unsigned n, k, res;
		cin>>n>>k;
		res = 1;
		n = n-1;
		k = k-1;
		if(n - k < k) k = n - k;
		for(long long unsigned i = 1; i <= k; i++){
			res *= (n-k)+i;
			res /= i;
		}
		cout<<res<<endl;
	}
	return 0;
}

