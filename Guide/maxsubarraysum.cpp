#include<iostream>
#include<algorithm>
#include<limits>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

void sumOrder3(vector<int> v){
	int best = INT_MIN;
	for(int i = 0; i < v.size(); i++){
		for(int j = i; j < v.size(); j++){
			int sum = 0;
			for(int k = i; k <= j; k++){
				sum += v[k];
			}
			best = max(sum, best);
		}
	}
	cout<<"Maximum sum of sub array: "<<best<<"\n";
}

void sumOrder2(vector<int> v){
	int best = INT_MIN;
	for(int i = 0; i < v.size(); i++){
		int sum = 0;
		for(int j = i; j < v.size(); j++){
			sum+=v[j];
			best = max(sum, best);
		}
	}
	cout<<"Maximum sum of sub array: "<<best<<"\n";
}

void sumOrder1(vector <int> v){
	int best = INT_MIN, sum = 0;
	for(int i = 0; i < v.size(); i++){
		sum = max(v[i], v[i]+sum);
		best = max(sum, best);
	}
	cout<<"Maximum sum of sub array: "<<best<<"\n";
}

int main(){
	string line;
	vector<int> v;
	cout<<"Enter the array with spaces: ";
	getline(cin, line);
	stringstream ss(line);
	string word;
	while(ss>>word){
		v.push_back(stoi(word));
	}
	cout<<"Order 3: \n";
	sumOrder3(v);
	cout<<"Order 2: \n";
	sumOrder2(v);
	cout<<"Order 1: \n";
	sumOrder1(v);
	return 0;
}
