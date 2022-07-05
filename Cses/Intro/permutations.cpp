#include<iostream>

using namespace std;

int main(){
	long long n, temp1, temp2;
	cin>>n;
	temp1 = n;
	temp2 = n/2;
	if(n==4){
		cout<<2<<" "<<4<<" "<<1<<" "<<3<<"\n";
		return 0;
	}
	if(n==2||n==3){
		cout<<"NO SOLUTION\n";
	}else{
		while(temp2>=1){
			cout<<temp1<<" "<<temp2<<" ";
			temp1-=1;
			temp2-=1;
		}
		if(n%2!=0){
			cout<<n/2+1<<"\n";
		}else{
			cout<<"\b\n";
		}
	}
	return 0;
}
