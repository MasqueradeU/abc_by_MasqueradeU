#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int N,M;
	cin>>N>>M;
    vector <int>a(M);
	vector <int>b(M);
    for(int i=0 ; i<M ; i++){
        cin>>a[i];
    	cin>>b[i];
    }
	
	bool t=false;
	vector <int>c;
	vector <int>d;
	for(int i=0 ; i<M ; i++){
		if(a[i]==1){
			if(b[i]==N){
				t=true;
				break;
			}
			else c.push_back(b[i]);
		}
		if(b[i]==N){
			d.push_back(a[i]);
		}
	}
	if(!t && (c.size()!=0 &&d.size()!=0)){
	sort(c.begin(),c.end());
	sort(d.begin(),d.end());
	
	int j=0;
	for(int i=0 ; i<c.size() ; ){
		if(j==d.size())break;
		if(c[i]==d[j]){
			t=true;
			break;
		}
		if(c[i]>d[j])j++;
		else if(c[i]<d[j])i++;
		else{
			i++;
			j++;
		}
		
	}
	}
	
	if(t)cout<<"POSSIBLE\n";
	else cout<<"IMPOSSIBLE\n";
	
	return 0;
}
