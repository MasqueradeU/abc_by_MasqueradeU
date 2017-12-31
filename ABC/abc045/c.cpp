#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int S ;
	cin>>S;

	long sum=0;
	int reverse;
	for(int i=0 ; i<S.size() ; i++){
		sum+=S.substr(i,1);	//ALL+
		sum+=S.substr(0,i+1);	//+one
		reverse=S.size()-(i+1);
		sum+=S.substr(0,i+1);
	}
	
	return 0;
}
