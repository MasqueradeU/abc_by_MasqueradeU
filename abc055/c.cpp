#include<iostream>

using namespace std;

int main(){
	int N ,M;
	cin>>N;
	cin>>M;
	
	int count=0;
	
	for(;N>0 ; N--){
		if(M<2)break;
		count++;
		M-=2;
	}
	for(; M>4 ; M-=4){
		count++;
	}
	cout<<count<<"\n";
	return 0;
}
