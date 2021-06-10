# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)

template<class T> void chmax(T& a,T b){
  if(a<b){
    a=b;
    }
  }

int main(){
  int n;
  cin >> n;
  vector<long long> a(n+10,0);
  vector<long long> b(n+10,0);
  rep(i,n) cin >> a[i] >> b[i];
  vector<long long> dp(n+10,0);
  rep(i,n){
    if(i == 0){
      dp[i] = a[i] + b[i];
     }
    else{
      dp[i+1] = max(dp[i],a[i]+b[i]);
    }
  }
  cout << dp[n] << endl;
}