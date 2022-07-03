#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(string s1, string s2){
	if(s1.size() == s2.size()) return s1 < s2;
	else return s1.size() < s2.size();
}

void printVector(vector<string> v){
	cout<<"Vector is: \n";
	for(int i = 0; i < v.size() ; i++){
		cout<<v[i]<<endl;
	}
}

int main(){
	int n;
	vector<string> v;
	string a;
	cout<<"Enter the size of the vector: ";
	cin>>n;
	for(int i = 0; i < n; i++){
		cout<<"Enter the string "<<i+1<<" :";
		cin>>a;
		v.push_back(a);
	}
	printVector(v);
	sort(v.begin(), v.end(), comp);
	printVector(v);
	return 0;
}
