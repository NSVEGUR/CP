// https://www.codechef.com/submit-v2/PLAYPIAN
#include<iostream>
#include<string>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		string str;
		cin>>str;
		int i = 0;
		for( ; i < str.length(); i++){
			if(i%2 == 0 && i < str.length()){
				if(str[i] == str[i+1]){
					cout<<"no"<<endl;
					break;
				}
			}
		}
		if(i == str.length()){
			cout<<"yes"<<endl;
		}
	}
	return 0;
}
