#include<iostream>
#include<string>
#include<vector>
#include<queue>

const int BLACK=0;
const int WHITE=1;
const int NOTHING=2;

using namespace std;

int main(){
	int N;
	cin>>N;
    vector <int>a(N-1);
	vector <int>b(N-1);
    for(int i=0 ; i<N-1 ; i++){
        cin>>a[i];
    	cin>>b[i];
    	a[i]-=1;
    	b[i]-=1;
    }
	queue <int> que;
	vector <vector <int>> neighbor(N);
	vector <int> neighbor_state(N,NOTHING);
	int temp,address,black=0,white=0;
	
	//隣接関係を作る
	for(int i=0 ; i<N-1 ; i++){
		neighbor[a[i]].push_back(b[i]);
		neighbor[b[i]].push_back(a[i]);
	}
	//キューの準備
	que.push(0);
	que.push(N-1);
	neighbor_state[0]=BLACK;
	neighbor_state[N-1]=WHITE;
	while(1){
		if(que.empty())break;
		//取り出し
		temp=que.front();
		que.pop();
		for(int i=0 ; i<neighbor[temp].size() ; i++){
			//白黒を付けておく（探索し終えた部分に該当）
			if(neighbor_state[temp]==BLACK){
				if(neighbor_state[neighbor[temp][i]]==NOTHING){
					neighbor_state[neighbor[temp][i]]=BLACK;
					que.push(neighbor[temp][i]);
				}
			}
			if(neighbor_state[temp]==WHITE){
				if(neighbor_state[neighbor[temp][i]]==NOTHING){
					neighbor_state[neighbor[temp][i]]=WHITE;
					que.push(neighbor[temp][i]);
				}
			}
		}
	}
	//マスのカウント
	for(int i=0 ; i<neighbor_state.size() ; i++){
		if(neighbor_state[i]==BLACK)black+=1;
		else white+=1;
	}
	if(white>=black)cout<<"Snuke\n";
	else cout<<"Fennec\n";
	return 0;
}
