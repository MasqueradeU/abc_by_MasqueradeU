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
    bool t=true;
    long long a_max=0;
    long long a_m=0;
    long long b_m=0;
    long long ans=0;
    for(long long i=0 ; i<N ; i++){
        if(a[a_max]<a[i]){
            a_max=i;
        }
    }
    a_m=a[a_max];
    b_m=b[a_max];
    //a[a_max]=0;
    b[a_max]=0;
    if(b_m>=H)t=false;
    //sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(long long i=N-1 ; i>0 ; i--){
        if(a_m<b[i]){
            H-=b[i];
            ans+=1;
        }
        if(H<=0){
            break;
        }
        if(H<=b_m){
            ans+=1;
            H=0;
            break;
        }
    }
    if(H>0){
        while(1){
            if(H<=b_m){
                ans+=1;
                break;
            }
            ans+=1;
            H-=a_m;
            if(H<=0)break;
        }
    }
    if(t)cout<<ans<<endl;
    else cout<<1<<endl;
    return 0;
}