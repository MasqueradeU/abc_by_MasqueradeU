#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int H,W;
	cin>>H>>W;
    vector <string>(S);
    for(int i=0 ; i<H ; i++){
		cin>>S[i];
    }
	
	bool state=true;
	for(int i=0 ; i<S.size() ; i++){
		for(int j=0 ; j<S[i].size() ; j++){
			if(S[i].substr(j,1)=="#"){//Žü•Ó‚ðŒ©‚é
				
			}
		}
		if(!state)break;
	}
	if(!state)cout<<"impossible\n";
	else{
		cout<<"possible\n";
		for(int i=0 ; i<S.size() ; i++){
			cout<<S[i]<<"\n";
		}
	}
	return 0;
}
