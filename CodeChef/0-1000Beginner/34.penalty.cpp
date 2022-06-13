// https://www.codechef.com/submit-v2/PENALTY
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int goals[10];
		int teamA , teamB;
		for(int i = 0; i < 10; i++){
			cin>>goals[i];
		}
		teamA = 0;
		teamB = 0;
		for(int i = 0; i < 10; i++){
			if(i%2 == 0){
				teamA+=goals[i];
			}else{
				teamB+=goals[i];
			}
		}
		if(teamA == teamB){
			cout<<0<<endl;
		}else if(teamA >  teamB){
			cout<<1<<endl;
		}else{
			cout<<2<<endl;
		}
	}
	return 0;
}
