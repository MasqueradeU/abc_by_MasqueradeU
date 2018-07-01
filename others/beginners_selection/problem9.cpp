#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N,Y;
    cin>>N>>Y;

    int tt = 0, ft = 0, ot = 0;
    bool ans = false;
    
    for (ft = 0 ; ft <= N ; ft++) {
        for (ot = 0 ; ot <= N - ft ; ot++) {
            tt = N - ft - ot;
            if( (10000 * tt) + (5000 * ft) + (1000 * ot) == Y) {
                ans = true;
                break;
            }
        }
        if (ans) break;
    }
    
    if (! ans) cout<<"-1 -1 -1"<<endl;
    else cout<<tt<<" "<<ft<<" "<<ot<<endl;
    
    return 0;
}
