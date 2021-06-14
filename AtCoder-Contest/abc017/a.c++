# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    vector<int> s(3);
    vector<int> e(3);
    int out=0;
    rep(i,3) cin >> s[i] >> e[i];
    rep(i,3){
        out += s[i] *e[i]/10;
    }
    cout << out << endl;
    


}

