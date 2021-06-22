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
    vector<vector<int>> a(3,vector<int>(3));
    rep(i,3)rep(j,3) cin >> a[i][j];
    vector<vector<bool>> punched(3,vector<bool>(3,false));
    int n;
    cin >> n;
    rep(i,n){
        int b;cin >> b;
        rep(y,3){
            rep(x,3){
                if(a[y][x] == b) punched[y][x] = true;
            }
        }
    }

    bool ans = false;
    rep(y, 3)
    {
        int cnt = 0;
        rep(x, 3) if (punched[y][x]) cnt++;
        if (cnt == 3)
            ans = true;
    }

    rep(x, 3)
    {
        int cnt = 0;
        rep(y, 3) if (punched[y][x]) cnt++;
        if (cnt == 3)
            ans = true;
    }

    if (punched[0][0] && punched[1][1] && punched[2][2])
        ans = true;
    if (punched[2][0] && punched[1][1] && punched[0][2])
        ans = true;

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;