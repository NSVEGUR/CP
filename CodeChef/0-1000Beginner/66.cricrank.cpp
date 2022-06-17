// https://www.codechef.com/submit-v2/CRICRANK
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int R1, W1, C1;
		int R2, W2, C2;
		cin>>R1>>W1>>C1;
		cin>>R2>>W2>>C2;
		int A = 0, B = 0;
		if(R1 > R2){
			A+=1;
		}else{
			B+=1;
		}
		if(W1 > W2){
			A+=1;
		}else{
			B+=1;
		}
		if(C1 > C2){
			A+=1;
		}else{
			B+=1;
		}
		if(A > B){
			cout<<"A"<<endl;
		}else{
			cout<<"B"<<endl;
		}
	}
	return 0;
}
