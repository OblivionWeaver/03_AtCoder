# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    vector<long long> sub(n);

    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) {
        sub[i] = abs(a[i] -b[i]);
    }
    long long minsum = 0;
    minsum = accumulate(sub.begin(),sub.end(),0);
    bool out = false;
    if((k- minsum)%2== 0){
        if(k-minsum >=0){
            out = true;
        }
    }
    if(out) cout << "Yes" <<endl;
    else cout << "No" <<endl;


}

