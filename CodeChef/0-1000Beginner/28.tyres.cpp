// https://www.codechef.com/submit-v2/TYRES
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int tyres, cars, bikes;
		cin>>tyres;
		cars = tyres/4;
		tyres = tyres%4;
		bikes = tyres/2;
		if(bikes>=1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
