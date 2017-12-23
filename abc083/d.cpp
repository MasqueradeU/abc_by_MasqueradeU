#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    string S;
    cin>>S;
	int len=1;
	int ans=0;
	int before=0;
	int middle=0;
	bool t=true;
	bool ini=true;
	S+="w";
    for(int i=1 ; i<S.size() ; i++){
    	if(S[i]=='w'){
    		if(before==len)len+=middle;
    		if(len>ans)ans=len;
    		break;
    	}
    	if(S[i-1]==S[i])len+=1;
    	else{
    		if(len>ans)ans=len;
    		if(ini){
    			if(t){
    				before=len;
    				t=false;
    			}
    			else{
    				middle=len;
    				ini=false;
    			}
    		}
    		else{
    			if(before==len)len+=middle;
    			if(len>ans)ans=len;
    			len-=middle;
    			before=middle;
    			middle=len;
    		}
    		len=1;
    	}
    }
	if(len>ans)ans=len;
    cout<<ans<<endl;
    
    
    
    return 0;
}
