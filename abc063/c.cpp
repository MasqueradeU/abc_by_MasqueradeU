#include<iostream>
#include<vector>

using namespace std;

int main(){
	int N;
	cin>>N;
	vector <int> s(N);
	for(int i=0 ; i<N ; i++){
		cin>>s[i];
	}
	
	int score=0;
	int maxscore=0;
	bool sta=false;
	
	for(int i=0 ; i<N ; i++){
		score+=s[i];
	}
	if(score%10!=0){
		cout<<score<<"\n";
		return 0;
	}
	score=0;
	
	for(int i=0 ; i<N ; i++){
		for(int j=0 ; j<N ; j++){
			if(j==i)continue;
			score+=s[j];
		}
		if(maxscore<score && score%10!=0){
			maxscore=score;
			sta=true;
		}
		score=0;
	}
	if(sta){
		cout<<maxscore<<"\n";
		return 0;
	}
	cout<<0<<"\n";
	
	return 0;
}
