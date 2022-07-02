#include<iostream>
#include<vector>
#include<sstream>
#include<string>

using namespace std;

bool binarySearch(vector<int> v, int x, int start, int end){
	int mid = (start + end) / 2;
	if(v[mid] == x)
		return true;
	if(start >= end)
		return false;
	if(v[mid] > x)
		return binarySearch(v, x, start, mid);
	else 
		return binarySearch(v, x, mid+1, end);
}

bool binarySearch2(vector<int> v, int x){
	int k = 0;
	int n = v.size();
	for(int b = n / 2; b >= 1; b /=2){
		while(k+b < n && v[k+b] <= x) k+=b;
	}
	if(v[k] == x)
		return true;
	return false;
}

int main(){
	vector<int> v;
	string sentence, word;
	int x;
	cout<<"Enter the array with spaces till next line: \n";
	getline(cin, sentence);
	stringstream ss(sentence);
	while(ss >> word){
		v.push_back(stoi(word));
	}
	cout<<"Enter the element to search: ";
	cin>>x;
	if(binarySearch(v, x, 0, v.size() - 1)){
		cout<<"FOUND.\n";
	}else{
		cout<<"NOT FOUND.\n";
	}
	return 0;
}
