// https://www.codechef.com/submit-v2/NOTIME
#include<iostream>

using namespace std;

int main(){
	int N, H, x;
	cin >> N >> H >> x;
	int arr[N];
	for(int i = 0; i < N; i++){
		cin>>arr[i];
	}
	int needed = H - x;
	for(int i = 0; i < N; i++){
		if(arr[i] >= needed){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
