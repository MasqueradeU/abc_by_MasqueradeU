#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    long long X,Y;
    cin>>X>>Y;
	int top=0;
    for(long long i=X ; i<=Y ; i*=2){
        top+=1;
    }
    cout<<top<<endl;
    
    
    
    return 0;
}
