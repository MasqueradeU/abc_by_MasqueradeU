#include<iostream>
#include<string>

using namespace std;

int main(){
	int X,A,B;
	cin>>X>>A>>B;

	if(A>=B)cout<<"delicious"<<"\n";
	else if(A+X>=B)cout<<"safe"<<"\n";
	else cout<<"dangerous"<<"\n";
	
	
	
	return 0;
}
