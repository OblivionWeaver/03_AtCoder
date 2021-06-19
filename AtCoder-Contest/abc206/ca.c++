# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
using namespace std;


int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(ALL(a));
    int out = 0;
    int i=0;
    while(i<n){    
            int count =1;
            while(a[i] == a[i+count]) count ++;
            int plas = n-(i+count);
            if(plas >0){
                out +=plas*count;
            }
            i+=count;
    }

    cout << out<< endl;
}