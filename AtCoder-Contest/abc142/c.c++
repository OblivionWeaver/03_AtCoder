# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1000);
    rep(i,n) cin >> a[i];
    vector<pair<int,int>> v;
    rep(i,n) v.pb({a[i],i+1}); 
    sort(ALL(v));

    rep(i,n){
        if(i) printf(" ");
        printf("%d",v[i].second);
    }
    cout << endl;


}