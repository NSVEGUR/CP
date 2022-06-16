// https://www.codechef.com/submit-v2/COMPRESSVD
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int arr[N];
		for(int i = 0; i < N; i++){
			cin>>arr[i];
		}
		int count = 0;
		for(int i = 0; i < N - 1; i++){
			if(arr[i] == arr[i+1])
				continue;
			else
				count+=1;
		}
		cout<<count + 1<<endl;
	}
	return 0;
}
