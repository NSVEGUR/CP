// https://www.codechef.com/submit-v2/COMPCAND
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N, K;
		cin>>N>>K;
		if(N%K!=0){
			cout<<-1<<endl;
		}else{
			cout<<N/K<<endl;
		}
	}
	return 0;
}
