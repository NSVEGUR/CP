#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
	int n, a;
	vector<int> v, temp;
	cout<<"Enter the size of the vector: ";
	cin>>n;
	cout<<"Enter the elements of the vector: ";
	for(int i = 0; i < n; i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int frequent = 0, count = 1, max = 1;
	for(int i = 0; i < n; i++){
		if(i == 0) {
			temp.push_back(v[i]);
			continue;
		};
		if(v[i] == temp[temp.size() - 1]){
			count++;
		}else{
			count = 1;
		}
		if(max < count){
			max = count;
			frequent = v[i];
		}
		temp.push_back(v[i]);
	}
	cout<<"Most Frequent Element is: "<<frequent<<"\n";
	return 0;
}
