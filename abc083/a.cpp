#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;
	if(A+B>C+D)cout<<"Left"<<endl;
    else if(A+B<C+D)cout<<"Right"<<endl;
    else cout<<"Balanced"<<endl;
    
    return 0;
}
