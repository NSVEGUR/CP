// https://www.codechef.com/submit-v2/SNCKYEAR
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
	int year;
	cin>>year;
	if(year == 2010 || year == 2015 || year == 2016 || year == 2017 || year == 2019){
		cout<<"HOSTED"<<endl;
	}else{
		cout<<"NOT HOSTED"<<endl;
	}
	}
	return 0;
}
