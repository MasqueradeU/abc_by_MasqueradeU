#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    int N;
    cin>>N;
    vector <int>a(N);
    for(int i=0 ; i<N ; i++){
        cin>>a[i];
    }

    int four_sum=0;
    int even=0;
    for(int i=0 ; i<N ; i++){
        if(a[i]%4==0)four_sum+=1;
        else if(a[i]%2==0)even++;
        if(even==2){
            four_sum+=1;
            even=0;
        }
    }
    if(four_sum*2+1>=a.size())cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
