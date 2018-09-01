#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int N;
    cin>>N;
    
    int ans = 0;
    int count = 0;
    for(int i=1 ; i<=N ; i+=2){
        for(int j=1 ; j<=N ; j++){
            if (i%j == 0) count +=1;
        }
        if (count == 8) ans += 1;
        count = 0;
    }
    
    cout<<ans<<endl;
    
    
    return 0;
}
