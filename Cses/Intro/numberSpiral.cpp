#include<iostream>

using namespace std;

int main(){
	long long T;
	cin>>T;
	while(T--){
		long long col, row, num;
		cin>>row>>col;
		if(col > row){
			if(col%2==0){
				num = (col-1)*(col-1) + 1;
				num += row - 1;
			}else{
				num = col*col;
				num -= (row - 1);
			}
		}else{
			if(row%2==0){
				num = row*row;
				num -= (col-1);
			}else{
				num = (row-1)*(row-1) + 1;
				num += col - 1;
			}
		}
		cout<<num<<"\n";
	}
	return 0;
}
