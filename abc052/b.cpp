#include<iostream>
#include<string>
<<<<<<< HEAD

using namespace std;

=======
 
using namespace std;
 
>>>>>>> 517f1bc... C問題が数学チックすぎてわからなかった。一定の法則が掴めそうで掴めないやつ
int main(){
	int N;
	string S;
	cin>>N>>S;
	
	int current=0;
	int max=0;
	for(int i=0 ; i<S.size() ; i++){
		if(S.substr(i,1)=="I")current+=1;
		else current-=1;
		if(current>max)max=current;
	}
	cout<<max<<"\n";
	
	return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 517f1bc... C問題が数学チックすぎてわからなかった。一定の法則が掴めそうで掴めないやつ
