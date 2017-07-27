#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int K;
    string s;
	cin>>s>>K;
	
    int n;

    for(int i=0 ; i<s.size() ; i++){
        n=(int)('{'-s[i])%26;
        if(n<=K){
            K=K-n;
            s[i]='a';
        }
        if(i==s.size()-1){
            s[i]=s[i]+(K%26);    
        }
        if(K==0)break;
    }
    cout<<s<<"\n";
	return 0;
}
