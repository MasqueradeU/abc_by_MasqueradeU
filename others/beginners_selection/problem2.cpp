#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    if ((a*b)%2 == 0) cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;
    
    return 0;
}
