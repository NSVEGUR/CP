#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long n, a;
	vector<int> v;
	cin>>n;
	for(long long i = 0; i < n - 1; i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for(long long i = 0; i < v.size(); i++){
		if(v[i]!=(i+1)){
			cout<<i+1<<"\n";
			return 0;
		}
	}
	cout<<n<<"\n";
	return 0;
}