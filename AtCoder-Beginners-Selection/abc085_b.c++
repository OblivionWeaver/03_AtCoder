# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i,n){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    int out = 1;
    int c = d[0];
    rep(i,n){
        if(c < d[i]){
            out++;
        }
        c = d[i];
    }
    cout << out << endl;

}

