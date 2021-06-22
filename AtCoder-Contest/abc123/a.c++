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
    vector<int> a(5);
    rep(i,5)cin >> a[i];
    int k;
    cin >> k;
    bool out = true;
    rep(i,5){
        rep(j,5){
            if(abs(a[i]-a[j])>k){
                out = false;
            }
        }
    }
    if(out) cout << "Yay!" << endl;
    else cout << ":(" << endl;

}