#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int N,A,B;
    cin>>N>>A>>B;
	int sum=0;
	int a=0;
	int total=0;
    for(int i=1 ; i<=N ; i++){
    	sum=0;
    	a=i;
    	sum+=a%10;
    	if(a/10>0){
    		a/=10;
    		sum+=a%10;
    	}
    	if(a/10>0){
    		a/=10;
    		sum+=a%10;
    	}
    	if(a/10>0){
    		a/=10;
    		sum+=a%10;
    	}
    	if(a/10>0){
    		a/=10;
    		sum+=a%10;
    	}
    	if(a/10>0){
    		a/=10;
    		sum+=a%10;
    	}
    	//cout<<sum<<endl;
    	if(sum>=A && sum<=B)total+=i;
    }
    cout<<total<<endl;
    
    
    
    return 0;
}
