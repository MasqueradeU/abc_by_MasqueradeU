#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    double N,Y;
    cin>>N>>Y;
    bool t=false;
    bool s=false;
    vector <int>a(3,0);
    a[0]=N;
    for(int i=0 ; i<=N ; i++){
        for(int j=0 ; j<=i ; j++){
            if(Y==(a[0]*10000)+(5000*j)+((i-j)*1000)){
                a[1]=j;
                a[2]=i-j;
                t=true;
                s=true;
                break;
            }
        }
        if(s)break;
        if(a[0]==N){
            if(a[0]*10000==Y){
                t=true;
                break;
            }
        }
        if(a[0]!=0)a[0]-=1;
    }
    if(t)cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    else cout<<-1<<" "<<-1<<" "<<-1<<endl;
    return 0;
}
