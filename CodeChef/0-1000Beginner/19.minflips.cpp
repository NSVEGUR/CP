// https://www.codechef.com/submit-v2/MINFLIPS

#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int len;
		cin>>len;
		int arr[len];
		int ones = 0, negones = 0;
		for(int i = 0; i < len;i++){
			cin>>arr[i];
		}
		for(int i = 0; i < len;i++){
			if(arr[i] == 1){
				ones+=1;
			}else if(arr[i] == -1){
				negones+=1;
			}
		}
		int count = abs(ones-negones);
		if(count%2 == 0){
			cout<<count/2<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
