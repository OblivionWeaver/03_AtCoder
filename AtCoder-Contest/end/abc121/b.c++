# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
using namespace std;

template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main(){
    int count = 0;
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> b(m);
    vector<vector<int>> a(n,vector<int>(m,0));
    vector<int> sum(n,c);
    rep(i,m) cin >> b[i];
    rep(i,n) rep(j,m) {
        cin >> a[i][j];
        sum[i] += a[i][j]*b[j];
    }
    rep(i,n) if(sum[i] >0) count ++;
    cout << count << endl;

}