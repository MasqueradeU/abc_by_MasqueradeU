#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector <int>d(N);
    for(int i=0 ; i<N ; i++){
        cin>>d[i];
    }
    int ans=1;
    sort(d.begin(),d.end());
    for(int i=N-1 ; i>0 ; i--){
        if(d[i]!=d[i-1])ans+=1;
    }
    cout<<ans<<endl;
    return 0;
}
