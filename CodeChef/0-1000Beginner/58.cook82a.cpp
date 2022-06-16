// https://www.codechef.com/submit-v2/COOK82A
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		string teams[4];
		int goals[4];
		for(int i = 0; i < 4; i++){
			cin>>teams[i];
			cin>>goals[i];
		}
		int comparableGoals[4];
		for(int i = 0; i < 4; i++){
			if(teams[i] == "RealMadrid"){
				comparableGoals[0] = goals[i];
			}else if(teams[i] == "Malaga"){
				comparableGoals[1] = goals[i];
			}else if(teams[i] == "Barcelona"){
				comparableGoals[2] = goals[i];
			}else{
				comparableGoals[3] = goals[i];
			}
		}
		if((comparableGoals[2] > comparableGoals[3])&&(comparableGoals[0] < comparableGoals[1])){
			cout<<"Barcelona"<<endl;
		}else{
			cout<<"RealMadrid"<<endl;
		}
	}
	return 0;
}