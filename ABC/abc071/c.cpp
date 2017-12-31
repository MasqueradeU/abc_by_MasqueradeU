#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector <long long>A(N);
    for(int i=0 ; i<N ; i++){
        cin>>A[i];
    }

    queue <long long> q;
    sort(A.begin(),A.end());
    long long a,b;
    for(int i=0 ; i<N ; i++){
        if(A[i]==A[i+1]){
            q.push(A[i]);
            i++;
        }
        if(q.size()==3)q.pop();
    }
    if(q.size()==2){
        a=q.front();
        q.pop();
        b=q.front();
        cout<<a*b<<endl;
    }
    else cout<<0<<endl;
    
    return 0;
}
