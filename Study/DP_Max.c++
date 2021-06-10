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
  cin>> n;
  vector<int> a(n,0);
  vector<int> dp(n,0);
  rep(i,n) cin >> a[i];
  rep(i,n){
    dp[i+1] = max(dp[i],dp[i]+a[i]);
  }
  cout << dp[n] << endl;
}
//https://qiita.com/drken/items/a5e6fe22863b7992efdb#%E5%95%8F%E9%A1%8C-1%E6%9C%80%E5%A4%A7%E5%92%8C%E5%95%8F%E9%A1%8C