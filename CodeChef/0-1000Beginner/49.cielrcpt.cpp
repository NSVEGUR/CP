// https://www.codechef.com/submit-v2/CIELRCPT
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int p, count;
		cin>>p;
		count = 0;
		int i = 11;
		while(i!=-1){
			while(p>=pow(2, i)){
				p -= pow(2, i);
				count++;
			}
			i--;
		}
		cout<<count<<endl;
	}
	return 0;
}
