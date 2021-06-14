# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int n,w;
    cin >> n >> w;
    int weight[n+100],value[n+100];
    int dp[n+100][w+100];

    rep(i,n) cin >> value[i] >> weight[i];
    //DPの初期条件:dp[0][w]=0
    rep(i,w+1) dp[0][i] =0;

    //DP roop
    rep(i,n){
        rep(i,w+1){
            if(w >= weight[i]){
                dp[i+1][w] = max(dp[i][w-weight[i]+value[i]],dp[i][w]);
            }
            else{
                dp[i+1][w] = dp[i][w];
            }
        }
    }
    cout << dp[n][w] << endl;


}