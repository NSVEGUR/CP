// https://www.codechef.com/submit-v2/PSGRADE
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
	int amin, bmin, cmin, tmin, a, b, c;
	cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
	if(a>=amin && b>=bmin && c>=cmin && (a+b+c)>=tmin){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	}
	return 0;
}
