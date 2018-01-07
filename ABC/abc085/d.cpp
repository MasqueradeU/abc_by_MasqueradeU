#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
 
using namespace std;
 
int main(){
    long long N,H;
    cin>>N>>H;
    vector <long long>a(N);
    vector <long long>b(N);
    for(int i=0 ; i<N ; i++){
        cin>>a[i];
        cin>>b[i];
    }
    long long ans=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(long long i=N-1 ; i>=0 ; i--){
        if(a[N-1]>=b[i] || H<=0)break;
           H-=b[i];
           ans+=1;
    }
    if(H>0){
        ans+=(long long)(H/a[N-1]);
        if(H%a[N-1]!=0)ans+=1;
    }
    cout<<ans<<endl;
    return 0;
}