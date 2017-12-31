#include<iostream>
#include<string>

#include<algorithm>


using namespace std;

int main(){
    string S;
    cin>>S;
    sort(S.begin(),S.end());
    
    int j=0;
    for(int i=0 ; i<S.size() ; i++){
        if(S[i]!=(char)('a'+j)){
            cout<<(char)('a'+j)<<endl;
            break;
        }
        if('a'+j=='z'){
            cout<<"None"<<endl;
            break;
        }
        if(i==S.size()-1)cout<<(char)('a'+(j+1))<<endl;
        if(S[i]!=S[i+1])j++;
    }
    
    return 0;
}
