#include<iostream>
#include<string>

using namespace std;

int main(){
    int N;
    string S1,S2;
    cin>>N>>S1>>S2;

    long count=0;
    long long sum;
    int i;
    if(S1[0]==S2[0]){
        sum=3;
        i=1;
    }
    else{
        sum=6;
        i=2;
    }
    for(i=i ; i<N ; i++){
        if(S1[i]==S2[i]){
            if(S1[i-1]==S2[i-1])sum*=2;
            //else if(S1[i-1]!=S2[i-1])sum*=1;
        }
        else if(S1[i]!=S2[i]){
            if(S1[i-1]==S2[i-1])sum*=2;
            else if(S1[i-1]!=S2[i-1])sum*=3;
            i+=1;
        }
        sum=sum%1000000007;
    }
    cout<<sum<<endl;
    
    return 0;
}
