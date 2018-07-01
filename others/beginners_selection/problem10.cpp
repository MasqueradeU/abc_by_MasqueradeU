#include<iostream>
#include<string>

using namespace std;

int main(){
    string S;
    cin>>S;

    string ans = "YES";
    for(int i = 0 ; i < S.length() ; i = i){
        if (S.substr(i, 5) != "dream" && S.substr(i, 5) != "erase") {
            ans = "NO";
            break;
        }

        i += 5;
        if (i == S.length()) break;

        if (S.substr(i, 1) == "d") {
            continue;
        } else if (S.substr(i, 2) == "er") {
            if (S.substr(i, 5) == "erase") i += 5;
            else i += 2;
        }
        
        if (S.substr(i, 1) == "r") i += 1;
    }
    
    cout<<ans<<endl;
    return 0;
}
