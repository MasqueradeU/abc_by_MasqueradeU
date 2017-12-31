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
	
	int address;
	int over=0;
	int min=0;
	vector <bool> color(8,false);
	for(int i=0 ; i<N ; i++){
		address=(int)(a[i]/400);
		if(address>=8){
			over+=1;
			continue;
		}
		color[address]=true;
	}
	for(int i=0 ; i<8 ; i++){
		if(color[i])min++;
	}
	if(min==0)cout<<1<<" "<<over<<"\n";
	else cout<<min<<" "<<min+over<<"\n";
	return 0;
}