#include<iostream>
#include<string>
#include<vector>

using namespace std;

const int gray=0;
const int brown=1;
const int green=2;
const int sky=3;
const int blue=4;
const int yellow=5;
const int orange=6;
const int red=7;

int main(){
	int N;
	cin>>N;
    vector <int>a(N);
    for(int i=0 ; i<N ; i++){
		cin>>a[i];
    }
	
	vector <bool> color(8,false);
	int over=0;
	int min=0;
	for(int i=0 ; i<N ; i++){
		if(a[i]>0 && a[i]<400)color[gray]=true;
		else if(a[i]>=400 && a[i]<800)color[brown]=true;
		else if(a[i]>=800 && a[i]<1200)color[green]=true;
		else if(a[i]>=1200 && a[i]<1600)color[sky]=true;
		else if(a[i]>=1600 && a[i]<2000)color[blue]=true;
		else if(a[i]>=2000 && a[i]<2400)color[yellow]=true;
		else if(a[i]>=2400 && a[i]<2800)color[orange]=true;
		else if(a[i]>=2800 && a[i]<3200)color[red]=true;
		else over++;
	}
	for(int i=0 ; i<8 ; i++){
		if(color[i])min++;
	}
	if(min+over>8)cout<<min<<" "<<8<<"\n";
	else cout<<min<<" "<<min+over<<"\n";
	return 0;
}
