# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int n ,s,t;
    cin >> n >> s >> t;
    vector<int> a(n);
    int out=0;
    rep(i,n) {
        cin >> a[i];
        if(i!= 0) a[i] += a[i-1];
        if(s <=a[i] && a[i] <=t) out ++;
    }
    cout << out << endl;

}