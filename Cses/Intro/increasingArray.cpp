#include<iostream>
#include<vector>
using namespace std;

int main(){
	long long n, a, count = 0;
	vector<int> v;
	cin>>n;
	for(long long i = 0; i < n; i++){
		cin>>a;
		v.push_back(a);
	}
	for(long long i = 1; i < v.size(); i++){
		if(v[i]>=v[i-1]) continue;
		else {
			count+=(v[i-1]-v[i]);
			v[i] = v[i-1];
		};
	}
	cout<<count<<"\n";
	return 0;
}