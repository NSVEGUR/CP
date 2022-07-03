#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<set>

using namespace std;

void printVector(vector<int> v){
	int n = v.size();
	cout<<"[";
	for(int i = 0; i < n; i++){
		cout<<v[i]<<",";
	}
	if(n){
		cout<<"\b";
	}
	cout<<"]\n";
}


int main(){
	vector<int> v;
	string sentence, word;
	cout<<"Enter the array with spaces till endline: \n";
	getline(cin, sentence);
	stringstream ss(sentence);
	while(ss >> word){
		v.push_back(stoi(word));
	}
	printVector(v);
	set<int> s(v.begin(), v.end());
	v.assign(s.begin(), s.end());
	printVector(v);
	return 0;
}