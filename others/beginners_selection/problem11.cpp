#include<iostream>
#include<vector>
#include<string>
#include <cstdlib>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector <int>t(N);
    vector <int>x(N);
    vector <int>y(N);
    for(int i=0 ; i<N ; i++){
        cin>>t[i]>>x[i]>>y[i];
    }
    
    string ans = "Yes";
    int move, betweenTime;

    for(int i = 0 ; i < N ; i++){
        if (i == 0) {
            move = x[i]+y[i];
            betweenTime = t[i];
        } else {
            move = abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);
            betweenTime = t[i] - t[i-1];
        }
        if (move > t[i] || move%2 != betweenTime%2) {
            ans = "No";
            break;
        }
    }
    
    cout<<ans<<endl;    
    
    return 0;
}
