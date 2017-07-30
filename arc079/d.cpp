#include<iostream>
#include<vector>

using namespace std;

int main(){
	long long K;
	cin>>K;
	
	int N=50;
	long long s=(long long)(K/N);
	long long t=K%N;
    vector <long long>a;
    
	for(int i=0 ; i<N ; i++){
		a.push_back(N-1);
		a[i]+=s;
	}
	for(int i=0 ; i<t ; i++){
		a[i]+=N-t+1;
	}
	for(int i=t ; i<N ; i++){
		a[i]-=t;
	}
	
	cout<<N<<endl;
	for(int i=0 ; i<N ; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	

	cout<<"\n";
	return 0;
}
