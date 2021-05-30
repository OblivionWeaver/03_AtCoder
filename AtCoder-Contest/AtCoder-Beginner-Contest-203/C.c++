# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;
using P = pair<int,ll>;

int main(){
    int n;
    ll k;
    cin >> n >> k;
    vector<P> p(n);
    rep(i,n){
        cin >> p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end());

    ll out =0;
    k --;
    out ++;
    int i=0;
    while (k >=0){
        //街移動
        if (p[i].first==out){
            k+=p[i].second;
            i+=1;
        }
        k --;
        out ++;
    }
    out --;
    cout << out<<endl;
    
}