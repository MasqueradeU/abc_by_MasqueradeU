#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector <int>a(N);
    for(int i=0 ; i<N ; i++){
        cin>>a[i];
    }
	
	int max=0;
	int ans=0;
	sort(a.begin(),a.end());
	vector <int>b(2+a[N-1]);
	for(int i=0 ; i<N ; i++){
		b[1+a[i]]+=1;
		b[1+a[i]-1]+=1;
		b[1+a[i]+1]+=1;
	}
    for(int i=0 ; i<1+a[N-1] ; i++){
    	//cout<<b[i]<<endl;
    	if(b[i]>max){
    		max=b[i];
    		//ans=i-1;
    	}
    }
	cout<<max<<endl;
    return 0;
}
