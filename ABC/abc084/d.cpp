#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int Q;
    cin>>Q;
    vector <int>l(Q);
    vector <int>r(Q);
    for(int i=0 ; i<Q ; i++){
        cin>>l[i] ;
        cin>>r[i] ;
    }
    const int OFF=100000;
    vector <bool> t(OFF,false);
    vector <int> n(OFF,0);
    for(int i=2 ; i<=OFF ;i++){
        if(t[i]==false){
            for(int k=i+i ; k<=OFF ; k+=i){
                t[k]=true;
            }
        }
    }
    for(int i=3 ; i<=OFF ;i+=2){
        if(t[i]==false && t[(i+1)/2]==false)n[i]+=1;
    }
    for(int i=3 ; i<=OFF ;i++){
        n[i]+=n[i-1];
    }
    for(int i=0 ; i<Q ;i++){
        cout<<n[r[i]]-n[l[i]-1]<<endl;
    }
    return 0;

}
