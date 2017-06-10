#include<iostream>

using namespace std;

int main(){
	int N;
	cin>>N;
	
	long power=1;
	for(int i=1 ; i<=N ; i++){
		power*=i;
		if(power>=1000000007)power=power%1000000007;
	}
	cout<<power<<"\n";
	return 0;
}
