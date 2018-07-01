#include<iostream>

using namespace std;

int main(){
    int N,A,B;
    cin>>N>>A>>B;

    int ans = 0, value;
    for (int i = 1 ; i <= N ; i++) {
        value = 0;
        string s = to_string(i);
        for(int j = 0 ; j < s.length() ; j++) {
            value += stol(s.substr(j, 1));
        }
        if (value >= A && value <= B) ans += i;
    }
    cout<<ans<<endl;
    
    return 0;
}
