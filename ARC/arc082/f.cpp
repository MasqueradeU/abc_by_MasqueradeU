#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    int X,K;
    cin>>X>>K;
    vector <int>r(K);
    for(int i=0 ; i<K ; i++){
        cin>>r[i];
    }
    int Q;
	cin>>Q;
    vector <int>t(Q);
    vector <int>a(Q);
    for(int i=0 ; i<Q ; i++){
        cin>>t[i];
    	cin>>a[i];
    }
	
	int A=0,B=0;
	int ad=0;
	bool state=false;
	for(int i=0 ; i<Q ; i++){
		ad=0;
		state=false;
		A=a[i];
		B=X-a[i];
		if(t[i]<=r[ad]){
			A-=t[i];
			if(A<0)A=0;
			cout<<A<<endl;
		}
		else{
			A-=r[ad];
			B+=r[ad];
			if(B>X)B=X;
			if(A<0)A=0;
			while(1){
				if(state)state=false;
				else state=true;
				ad+=1;
				if(t[i]<=r[ad]){
					if(state){
						A+=t[i]-r[ad-1];
						B-=t[i]-r[ad-1];
						if(A>X)A=X;
						if(B<0)B=0;
					}
					else{
						B+=t[i]-r[ad-1];
						A-=t[i]-r[ad-1];
						if(B>X)B=X;
						if(A<0)A=0;
					}
					break;
				}
				else{
					if(state){
						if(ad==K-1){
							A+=t[i]-r[ad];
							B-=t[i]-r[ad];
							if(A>X)A=X;
							break;
						}
						else{
							A+=r[ad]-r[ad-1];
							B-=r[ad]-r[ad-1];
						}
						if(A>X)A=X;
						if(B<0)B=0;
					}
					else{
						if(ad==K-1){
							B+=t[i]-r[ad];
							A-=t[i]-r[ad];
							if(A<0)A=0;
							break;
						}
						else{
							B+=r[ad+1]-r[ad-1];
							A-=r[ad+1]-r[ad-1];
						}
						if(B>X)B=X;
						if(A<0)A=0;
					}
				}
			}
			cout<<A<<endl;
		}
	}
    return 0;
}
