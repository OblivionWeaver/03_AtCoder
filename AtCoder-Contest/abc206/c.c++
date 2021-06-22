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
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<bool> b(inf,false);
    rep(i,n) {
        cin >> a[i];
    }
    sort(ALL(a));
    vector<ll> vec={};
    ll au =0;
    rep(i,n) {
        if(a[i] != au){
            vec.pb(a[i]);
            au = a[i];
        }
    }
    rep(i,vec.size()) cout << vec[i] << " ";

    cout <<( vec.size()*(vec.size()-1) )/2<<endl; 
    
}