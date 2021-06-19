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
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(ALL(a));
    int out = 0;
    int plas =0;
    for(ll i= 0;i<n;i++){
        if(i!=0 && a[i] == a[i-1]) out += plas;
        else{
            int count =1;
            while(a[i] == a[i+count]) count ++;
            plas = n-(i+count);
            if(plas >0){
                out +=plas;
            }

        }
    }
    cout << out<< endl;
}