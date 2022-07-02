#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n, a;
	vector<int> v;
	bool ok = true;
	cout<<"Enter the size of the vector: ";
	cin>>n;
	cout<<"Enter the elements of the vector: ";
	for(int i = 0; i < n; i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n - 1; i++){
		if(v[i] == v[i+1]){
			ok = false;
			break;
		}
	}
	if(ok){
		cout<<"Unique.\n";
	}else{
		cout<<"Not Unique.\n";
	}
	return 0;
}
