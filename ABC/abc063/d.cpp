#include<iostream>
#include<string>
#include<vector>

using namespace std;


int maxaddress(vector <int> h,int N){
	int maxa=0;
	for(int j=0 ; j<N ; j++){
		if(h[maxa]<h[j])maxa=j;
	}
	return maxa;
}


int main(){
	int N,A,B;
	cin>>N;
	cin>>A;
	cin>>B;
	vector <int>h(N);
	for(int i=0 ; i<N ; i++){
		cin>>h[i];
	}
	
	int count=0;
	int address=0;
	int center_ex=0;
	bool sta=false;
	bool over=true;
	while(1){
		address=maxaddress(h,N);
		h[address]-=A;
		count++;
		for(int j=0 ; j<N ; j++){
			if(h[j]>0){
				h[j]-=B;
				if(h[j]>0){
					over=false;
				}
			}
			if(over==true && j==N-1)sta=true;
		}
		if(sta)break;
		center_ex=0;
		address=0;
		over=true;
	}
	cout<<count<<"\n";
	
	return 0;
}
