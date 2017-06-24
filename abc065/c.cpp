#include<iostream>

using namespace std;

int main(){
	int N,M;
	cin>>N>>M;
	
	long long sum=1;
	if(N==M || N==(M+1) || (N+1)==M){
		for(int i=1 ; i<=M ; i++){
			sum=(sum*i)%(1000000000+7);
		}
		for(int i=1 ; i<=N ; i++){
			sum=(sum*i)%(1000000000+7);
		}
		
		if(N==M)sum=(sum*2)%(1000000000+7);
		cout<<sum<<"\n";
	}
	else{
		cout<<0<<"\n";
	}
	
	return 0;
}