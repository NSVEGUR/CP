// https://www.codechef.com/submit-v2/CCOOK
#include<iostream>

using namespace std;

int main(){
	int N;
	cin>>N;
	int arr[N][5];
	int total[N];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < 5; j++){
			cin>>arr[i][j];
		}
		total[i] = 0;
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < 5; j++){
			total[i] += arr[i][j];
		}
	}
	for(int i = 0; i < N; i++){
		if(total[i] == 0){
			cout<<"Beginner"<<endl;
		}else if(total[i] == 1){
			cout<<"Junior Developer"<<endl;
		}else if(total[i] == 2){
			cout<<"Middle Developer"<<endl;
		}else if(total[i] == 3){
			cout<<"Senior Developer"<<endl;
		}else if(total[i] == 4){
			cout<<"Hacker"<<endl;
		}else{
			cout<<"Jeff Dean"<<endl;
		}
	}
	return 0;
}
