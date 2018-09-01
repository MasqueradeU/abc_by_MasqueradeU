#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    long long N,M,Q;
    cin>>N>>M>>Q;

    vector<vector<long long> >S(M, vector<long long>(2));

    for (int i = 0 ; i<M ; i++) {
        cin>>S[i][0]>>S[i][1];
    }

    vector<long long>p(Q);
    vector<long long>q(Q);

    for (int i = 0 ; i<Q ; i++) {
        cin>>p[i]>>q[i];
    }

    sort(S.begin(), S.end());

    vector<long long>map(200000,0);

    int ans = 0;
    int bef = 0;
    for (int i = 0 ; i<Q ; i++) {
        for (int j = map[p[i]] ; j<M ; j++) {
            if (j == map[p[i]]) {
                bef = S[j][0];
            }
            else if (bef != S[j][0]) {
                map[S[j][0]] = j;
            }

            if (q[i] < S[j][0]) {
                break;
            }
            if (p[i] <= S[j][0] && q[i] >= S[j][1]) ans +=1;
            bef = S[j][0];
        }
        cout<<ans<<endl;
        ans = 0;
    }

    return 0;
}
