# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int main(){
    int n, x[101];
    cin >> n;
    rep(i,n) cin >> x[i];
    sort(x,x+n);
    int out=100000000;
    rep1(i,100){
        int hp = 0;
        rep(j,n){
            hp += (x[j]-i)*(x[j]-i);
        }
        chmin(out,hp);
    }
    cout << out << endl;
}