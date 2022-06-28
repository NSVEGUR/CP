#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void permutations(vector <int> v, vector <bool> choosen, vector <int> p = vector<int>()){
	if(v.size() == p.size()){
		cout<<"(";
		for(int i = 0; i < p.size(); i++){
			cout<<p[i]<<",";
		}
		cout<<"\b)\n";
		return;
	}
	for(int i = 0; i < v.size(); i++){
		if(choosen[i]) continue;
		choosen[i] = true;
		p.push_back(v[i]);
		permutations(v, choosen, p);
		choosen[i] = false;
		p.pop_back();
	}
}

void inbuiltPermutations(vector <int> v){
	do{
		cout<<"(";
		for(int i = 0; i < v.size(); i++){
			cout<<v[i]<<",";
		}
		cout<<"\b)\n";
	}while(next_permutation(v.begin(), v.end()));
}

int main(){
	int n;
	cout<<"Enter the size of the set:";
	cin>>n;
	cout<<"\n";
	cout<<"Enter the elements of the set: \n";
	vector <int> v;
	vector <bool> choosen(n, false);
	int x;
	while(n--){
		cin>>x;
		v.push_back(x);
	}
	cout<<"\nPossible Permutations are:\n";
	permutations(v, choosen);
	cout<<"\nInbuilt Permutations are: \n";
	inbuiltPermutations(v);
	return 0;
}
