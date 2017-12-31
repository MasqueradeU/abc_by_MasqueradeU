#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin>>N;
    vector <int>x(N);
	vector <int>y(N);
	vector <int>x_c(N);
	vector <int>y_c(N);
    for(int i=0 ; i<N ; i++){
        cin>>x[i]>>y[i];
    	x_c[i]=x[i];
    	y_c[i]=y[i];
    }
	
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	
	vector <int>x_n(N);
	vector <int>x_n(N);
	
	for(int i=0 ; i<x.size() ; i++){
		for(int j=0 ; j<x.size() ; j++){
		
		}
	}
	
	vector <int>n(N);
	
	
	return 0;
}
