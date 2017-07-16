#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int N,K;
	cin>>N>>K;
    vector <int>L(N);
    for(int i=0 ; i<N ; i++){
        cin>>L[i];
    }
	int sum=0;
	int count=0;
	
	sort(L.begin(),L.end());
	for(int i=L.size()-1 ; ; i--){
		sum+=L[i];
		count+=1;
		if(count==K)break;
	}
	cout<<sum<<"\n";
	
	
	return 0;
}
