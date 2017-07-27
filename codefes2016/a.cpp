#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	string s ;
	cin>>s;

    string t;
    t=s.substr(0,4);
    t+=" ";
    t+=s.substr(4,8);

    cout<<t<<"\n";
	
	return 0;
}
