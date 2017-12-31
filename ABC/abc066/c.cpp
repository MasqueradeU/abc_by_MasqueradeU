#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
    vector <int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i] ;
    }
	
	vector <int>b;
	if(n%2==0){
		for(int i=n-1 ; i>=0 ; i-=2){
			b.push_back(a[i]);
		}
		for(int i=0 ; i<n ; i+=2){
			b.push_back(a[i]);
		}
	}
	else if(n%2==1){
		for(int i=n-1 ; i>=0 ; i-=2){
			b.push_back(a[i]);
		}
		for(int i=1 ; i<n ; i+=2){
			b.push_back(a[i]);
		}
	}

	for(int i=0 ; i<n ; i++){
		cout<<b[i];
		if(i!=n-1)cout<<" ";
	}
	cout<<"\n";
	
	return 0;
}
