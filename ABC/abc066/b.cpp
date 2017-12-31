#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	string S;
	cin>>S;
	
	int max=0;
	S.pop_back();
	for(int i=0 ;  ; i++){
		if(S.size()%2!=0){
			S.pop_back();
			continue;
		}
		if(S.substr(0,S.size()/2)==S.substr(S.size()/2,S.size()/2)){
			max=S.size();
			break;
		}
		S.pop_back();
	}
	cout<<max<<"\n";
	return 0;
}
