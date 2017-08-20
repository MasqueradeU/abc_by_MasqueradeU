#include<iostream>

using namespace std;

int main(){
    int x,a,b;
    cin>>x>>a>>b;
    
    int s=x-a;
    if(s<0)s*=-1;
    int t=x-b;
    if(t<0)t*=-1;
    
    if(s>t)cout<<"B"<<endl;
    else cout<<"A"<<endl;
    return 0;
}
