# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;
using P = pair<int,ll>;

int main(){
    int n;
    ll k;
    cin >>n>>k;
    vector<pair<ll,int>> f(n);
    rep(i,n){
        cin >> f[i].first >>f[i].second;
    }
    sort(f.begin(),f.end());
    int j=0;
    //シミュレーション
    ll ans = k;
    //現時点で一番行ける最大の村
    //村人ベースでそこまで到達できるかを考える
    while(j<n && f[j].first <=ans){//ansより先に友達がいるかつjがいない
        ans += f[j].second;
        j++;
    }
    cout << ans <<endl;
}