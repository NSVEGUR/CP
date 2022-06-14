// https://www.codechef.com/submit-v2/PRICECON
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N, K;
		cin>>N>>K;
		int arr[N];
		for(int i = 0; i < N; i++){
			cin>>arr[i];
		}
		int total, price_ceiling;
		total = 0;
		price_ceiling = 0;
		for(int i = 0; i < N; i++){
			total+=arr[i];
		}
		for(int i = 0; i < N; i++){
			if(arr[i]>K){
				price_ceiling+=K;
			}else{
				price_ceiling+=arr[i];
			}
		}
		cout<<total-price_ceiling<<endl;
	}
	return 0;
}