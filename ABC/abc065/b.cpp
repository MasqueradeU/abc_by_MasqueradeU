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
    }
	
	int current=a[0];
	int count=0;
	while(1){
		count++;
		if(current==2){
			cout<<count<<"\n";
			break;
		}
		current=a[current-1];
		if(count>N){
			cout<<-1<<"\n";
			break;
		}
	}
	
	return 0;
}
