#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    string s;
    cin>>s;

    int ans = 0;
    for (int i = 0 ; i < s.length() ; i++) {
        if (s.substr(i, 1) == "1") ans += 1;
    }
    cout<<ans<<endl;

    return 0;
}
