#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector <int>a(N);
    for(int i=0 ; i<N ; i++){
        cin>>a[i];
    }
    
    int ans = 0;
    bool endflag = false;
    while (1) {
        for (int i = 0 ; i < N ; i++) {
            if (a[i]%2 == 1) {
                endflag = true;
                break;
            }
            a[i] /= 2;
        }
        if (endflag) break;
        ans += 1;
    }
    cout<<ans<<endl;    
    
    return 0;
}
