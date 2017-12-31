#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a+b>=b+c){
		if(b+c>=c+a)cout<<c+a<<"\n";
		else cout<<b+c<<"\n";
	}
	else if(a+b<=b+c){
		if(a+b>=a+c)cout<<a+c<<"\n";
		else cout<<a+b<<"\n";
	}

	return 0;
}
