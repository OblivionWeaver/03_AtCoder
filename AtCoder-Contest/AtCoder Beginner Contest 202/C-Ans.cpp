# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for (int i= 0;i<(n);++i)
using ll = long long;
using P = pair<int,int>;
// i,jがN以下かので全部計算するとTLE.O(N^2)
// jを固定する.iは全部試す.
//intだとError
int main(){
    int N;
    cin >> N;
    vector<int> A(N),B(N),C(N);//0で初期化.
    rep(i,N) cin >> A[i];
    rep(i,N) cin >> B[i];
    rep(i,N) cin >> C[i];
    vector<int> cnt(N+1);
    rep(i,N) cnt[A[i]]++;
    ll ans = 0;
    rep(j,N) ans += cnt[B[C[j]-1]];
    cout << ans << endl;
    return 0;





}