#include<iostream>
#include<vector>
#include<sstream>
#include<string>

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
	cout<<"Enter the array with spaces till next line: \n";
	getline(cin, sentence);
	stringstream ss(sentence);
	while(ss >> word){
		v.push_back(stoi(word));
	}
	printVector(v);
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	printVector(v);
	return 0;
}
