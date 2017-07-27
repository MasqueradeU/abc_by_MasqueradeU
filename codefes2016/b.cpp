#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int N;
	cin>>N;
    vector <int>a(N);
    for(int i=0 ; i<N ; i++){
        cin>>a[i];
        a[i]-=1;
    }
	
    vector <bool>t(N,false);
    int sum=0;
    for(int i=0 ; i<N ; i++){
        if(t[i])continue;
        if(a[a[i]]==i){
            sum+=1;
            t[i]=true;
            t[a[i]]=true;
        }
    }
	cout<<sum<<"\n";
	
	
	return 0;
}
