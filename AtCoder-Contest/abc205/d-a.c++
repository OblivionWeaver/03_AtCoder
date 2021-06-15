# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n, q;
    cin >> n >> q;
    vector<double> a(n);
    vector<double> d(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<double> k(q);
    rep(i, q) cin >> k[i];
    
    rep(i, q)
    {
        int count = 0;
        rep(j,n){
            if (a[j] <=k[i]){
                count ++;
            }
        }
        cout <<k[i] +1-count;
    }
    cout << endl;
}