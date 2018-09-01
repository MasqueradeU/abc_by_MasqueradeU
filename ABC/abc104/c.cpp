#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    long long K;
    string S;
    cin>>S>>K;

    for (int i = 0 ; i<S.size() ; i++) {
        if (S.substr(i, 1) == "1" && K != i+1) {
            continue;
        } else if (S.substr(i, 1) == "1" && K == i+1) {
            cout<<S.substr(i, 1)<<endl;
            break;
        } else if (S.substr(i, 1) != "1") {
            cout<<S.substr(i, 1)<<endl;
            break;
        }
    }
    
    return 0;
}
