#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector <int>p(N);
    for(int i=0 ; i<N ; i++){
        cin>>p[i];
    	p[i]-=1;
    }
	int count=0;
	for(int i=0 ; i<N ; i++){
		if(p[i]==i){
			if(p[i+1]==i+1)i++;
			count+=1;
		}
	}
    cout<<count<<endl;
    
    
    return 0;
}
