#include<iostream>
#include<string>

using namespace std;

int main(){
	string S;
	cin>>S;
	
	string sound[]={"Fa","Mi","Re","Do","Si","La","So"};
	int j=0;
    for(int i=0 ; i<S.size() ; i+=2){
    	if(S.substr(i,6)=="WBWBWB"){
    		cout<<sound[j]<<"\n";
    		break;
    	}
    	j++;
    	if(S.substr(i+1,1)=="W")i--;
    }
	return 0;
}
