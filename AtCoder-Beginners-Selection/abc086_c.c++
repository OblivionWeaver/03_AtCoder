# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n;
    cin >> n;
    vector<int> t(110000);
    vector<int> x(110000);
    vector<int> y(110000);
    t[0] = x[0] =y[0] =0;
    rep(i,n){
        cin >> t[i+1] >> x[i+1] >> y[i+1];
    }
    bool can=true;
    rep(i,n){
        int dt = t[i+1] -t[i];
        int dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
        if(dt<dist) can = false;
        if(dist %2 != dt%2) can = false;
    }

    if(can) cout << "Yes" <<endl;
    else cout << "No" <<endl;
}

