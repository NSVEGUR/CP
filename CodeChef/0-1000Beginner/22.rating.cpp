// https://www.codechef.com/submit-v2/RATING
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int sum, maxmul;
		cin>>sum;
		if(sum == 0){
			cout<<-1<<endl;
		}else{
			cout<<-(sum+1)<<endl;
		}
	}
	return 0;
}
