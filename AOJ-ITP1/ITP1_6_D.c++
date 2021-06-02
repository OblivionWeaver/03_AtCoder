# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > a(n,vector<int>(m,0));
    vector<int> b(m);
    vector<int> out(n);
    rep(i,n){
        rep(j,m){
            cin >> a[i][j];
        }
    }
    rep(i,m){
        cin >> b[i];
    }

    rep(i,n){
        rep(j,m){
            out[i] += (a[i][j] * b[j]);

        }
    }
    rep(i,n){
        cout << out[i] <<endl;
    }

}
