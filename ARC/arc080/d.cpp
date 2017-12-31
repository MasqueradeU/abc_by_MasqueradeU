#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int H,W,N;
    cin>>H>>W>>N;
    vector <int>a(N);
    for(int i=0 ; i<N ; i++){
        cin>>a[i];
    }
    
    vector <int>b(W*H,0);
    int now=0;
    bool dis=true;
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<a[i] ; j++){
            b[now]=i+1;
            if(i==N-1 && j==a[i]-1)break;
            if(now%W==W-1 && dis==true){
                now+=W;
                dis=false;
            }
            else if(now%W==0 && now!=0 && dis==false){
                now+=W;
                dis=true;
            }
            else if(dis)now+=1;
            else now-=1;
        }
    }
    for(int i=0 ; i<H*W ; i++){
        cout<<b[i]<<" ";
        if(i%W==W-1)cout<<endl;
    }

    return 0;
}
