# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    vector<int> iroha(3);
    rep(i,3) cin >> iroha[i];
    sort(ALL(iroha));
    bool out = false;
    if(iroha[0] == 5&& iroha[1] ==5 && iroha[2]==7){
        out = true;
    }
    if(out == true) cout << "YES" << endl;
    else cout << "NO" << endl;

}