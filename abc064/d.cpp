#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int N;
	string S;
	cin>>N>>S;
	
	int pos=0;
	string ans="";
	for(int i=0 ; i<S.size() ; i++){
		if(S.substr(i,1)=="(")pos+=1;
		else if(S.substr(i,1)==")")pos-=1;
		if(pos<0){
			ans+="(";
			pos=0;
		}
	}
	ans+=S;
	if(pos>0){
		while(pos>0){
			ans+=")";
			pos-=1;
	}
	}
	cout<<ans<<"\n";
	return 0;
}
