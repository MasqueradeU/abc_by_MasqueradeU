#include<iostream>

using namespace std;

int main(){
    int A,B,C,X;
    cin>>A>>B>>C>>X;
    
    int ans = 0;
    int value = 0;
    for (int i = 0 ; i <= A ; i++) {
        if (X < 500 * i) break;
        for (int j = 0 ; j <= B ; j++) {
            value = (500 * i) + (100 * j);
            if (X < value) break;
            if (X <= value + (C * 50)) ans += 1;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
