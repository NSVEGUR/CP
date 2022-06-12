// https://www.codechef.com/submit-v2/FIRSTANDLAST
#include<iostream>
#include<climits>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int len;
		cin>>len;
		int arr[len];
		int max,tempmax;
		max = INT_MIN;
		tempmax = INT_MIN;
		for(int i = 0;i < len;i++){
			cin>>arr[i];
		}
		for(int i = 0;i < len;i++){
			if(i == len - 1){
				tempmax = arr[0] + arr[len-1];
			}else{
				tempmax = arr[i] + arr[i+1];
			}
			if(max<tempmax){
					max = tempmax;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
