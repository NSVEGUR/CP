// https://www.codechef.com/submit-v2/WCC
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int X, C, N, D, price;
		cin>>X;
		string str;
		cin>>str;
		C = 0;
		N = 0;
		D = 0;
		for(int i = 0; i < str.length(); i++){
			if(str[i] == 'C'){
				C+=1;
			}else if(str[i] == 'N'){
				N+=1;
			}else{
				D+=1;
			}
		}
		if(C > N){
			price = 60 * X;
		}else if(N > C){
			price = 40 * X;
		}else{
			price = 55 * X;
		}
		cout<<price<<endl;
	}
	return 0;
}
