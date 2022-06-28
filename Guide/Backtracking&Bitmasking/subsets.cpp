#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

void subsetsBacktracking(vector <int> v, int index = 0, vector <int> set = vector<int>()){
	if(index == v.size()){
		cout<<"{";
		for(int i = 0; i < set.size(); i++){
			cout<<set[i]<<",";
		}
		if(set.size()){
			cout<<"\b";
		}
		cout<<"}\n";
		return;
	}
	subsetsBacktracking(v, index+1, set);
	set.push_back(v[index]);
	subsetsBacktracking(v, index+1, set);
}

void subsetsBitManipulation(vector <int> v){
	int size = pow(2, v.size());
	for(int i = 0; i < size; i++){
		cout<<"{";
		for(int j = 0; j < size; j++){
			if(i & (1<<j)){
				cout<<v[j]<<",";
			}
		}
		if(i){
			cout<<"\b";
		}
		cout<<"}\n";
	}
	
}

int main(){
	int n;
	cout<<"Enter the size of the set:";
	cin>>n;
	cout<<"\n";
	cout<<"Enter the elements of the set: \n";
	vector <int> v;
	int x;
	while(n--){
		cin>>x;
		v.push_back(x);
	}
	cout<<"\nSubsets through back tracking are:\n";
	subsetsBacktracking(v);
	cout<<"Subsets through bit manipulation are:\n";
	subsetsBitManipulation(v);
	return 0;
}