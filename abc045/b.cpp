#include<iostream>
#include<string>

using namespace std;

int main(){
	string a,b,c;
	cin>>a>>b>>c;
	
	string next=a.substr(0,1);
	a.erase(a.begin());
	while(1){		
		if(next=="a"){
			if(a.size()==0){
				cout<<"A\n";
				break;
			}
			next=a.substr(0,1);
			a.erase(a.begin());
		}
		else if(next=="b"){
			if(b.size()==0){
				cout<<"B\n";
				break;
			}
			next=b.substr(0,1);
			b.erase(b.begin());
		}
		else if(next=="c"){
			if(c.size()==0){
				cout<<"C\n";
				break;
			}
			next=c.substr(0,1);
			c.erase(c.begin());
		}
	}
	return 0;
}
