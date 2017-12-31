#include<iostream>
#include<vector>

using namespace std;

int main(){
	int N;
	cin>>N;
    vector <int>a(N);
    for(int i=0 ; i<N ; i++){
		cin>>a[i];
    }
	
	int max=0;
	int min=a[0];
	for(int i=0 ; i<N ; i++){
		if(max<a[i])max=a[i];
		if(min>a[i])min=a[i];
	}
	cout<<max-min<<"\n";
	
	return 0;
}
