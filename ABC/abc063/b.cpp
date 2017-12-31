#include<iostream>
#include<string>

using namespace std;

int main(){
	string S;
	cin>>S;
	
	bool sta=true;
	for(int i=0 ; i<S.size() ; i++){
		for(int j=i+1 ; j<S.size() ; j++){
			if(S.substr(i,1)==S.substr(j,1)){
				sta=false;
				break;
			}
		}
		if(!sta)break;
	}
	if(sta)cout<<"yes\n";
	else cout<<"no\n";
	
	return 0;
}
