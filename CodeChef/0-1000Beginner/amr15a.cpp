// https://www.codechef.com/submit-v2/AMR15A
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n], l = 0, u = 0;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[i]%2!=0){
			u+=1;
		}else{
			l+=1;
		}
	}
	if(u>=l){
		cout<<"NOT READY"<<endl;
	}else{
		cout<<"READY FOR BATTLE"<<endl;
	}
	return 0;
}
