#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string A;
    cin>>A;

    long long dual=0;
    char rt;
    long long chp=0;
    long long pena=1;
    sort(A.begin(),A.end());
    rt=A[0];
    for(int i=1 ;i<A.size() ; i++){
        chp+=i;
        if(rt==A[i]){
            dual+=pena;
            pena+=1;
        }
        else{
            rt=A[i];
            pena=1;
        }
    }

    cout<<1+chp-dual<<endl;
    
    return 0;
}
