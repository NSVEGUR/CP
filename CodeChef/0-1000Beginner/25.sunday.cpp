// https://www.codechef.com/submit-v2/SUNDAY
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int len;
		cin>>len;
		int arr[len], holidays;
		for(int i = 0; i < len; i++){
			cin>>arr[i];
		}
		holidays = 0;
		for(int i = 0; i < len; i++){
			if((arr[i]%7) != 0 && (arr[i]%7) != 6){
				holidays+=1;
			}
		}
		cout<<holidays+8<<endl;
	}
	return 0;
}
