#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>

using namespace std;


int main(){
	int n, a;
	vector<int> v;
	cout<<"Enter the size of the vector: ";
	cin>>n;
	cout<<"Enter the elements of the vector: ";
	for(int i = 0; i < n; i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int x, y, min = INT_MAX, diff = 0;
	for(int i = 0; i < n - 1; i++){
		diff = v[i+1] - v[i];
		if(min >= diff){
			min = diff;
			x = v[i];
			y = v[i+1];
		}
	}
	cout<<"Two numbers such that their difference is minimum: "<<x<<" & "<<y<<"\n";
	return 0;
}
