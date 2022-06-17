// https://www.codechef.com/submit-v2/JDELAY
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int arr[N][2];
		int delayed = 0;
		for(int i = 0; i < N; i++){
			cin>>arr[i][0]>>arr[i][1];
		}
		for(int i = 0; i < N; i++){
			if((arr[i][1] - arr[i][0]) > 5){
				delayed +=1;
			}
		}
		cout<<delayed<<endl;
	}
	return 0;
}
