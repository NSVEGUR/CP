#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	char ch;
	int count = 0, max = 0;
	cin>>str;
	for(int i = 0; i < str.length(); i++){
		if(i == 0 || (ch == str[i])){
			count += 1;
		}else{
			count = 1;
		}
		ch = str[i];
		if(count > max){
			max = count;
		}
	}
	cout<<max<<"\n";
	return 0;
}
