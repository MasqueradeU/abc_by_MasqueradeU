#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main(){
    long long Q,H,S,D,N;
    cin>>Q>>H>>S>>D>>N;
    
    long long min,off,sum,prise,total;
    vector <long long>v={Q*4,H*2,S*1,D/2};
    vector <long long>t={Q,H,S,D};
    vector <double>m={0.25,0.5,1.0,2.0};
    off=0;
    sum=0;
    int end=4;
    while(N!=0){
        min=v[0];
        if(m[off]==2.0)end=3;
        off=0;
        for(int i=1 ; i<end ; i++){
            if(min>v[i] && m[i]<=N){
                min=v[i];
                off=i;
            }
        }
        prise=(long long)(N/m[off]);
        total=(long long)(prise*t[off]);
        sum+=total;
        N-=(long long)(m[off]*prise);
        cout<<prise<<endl;
    }

    cout<<sum<<endl;
    return 0;
}
