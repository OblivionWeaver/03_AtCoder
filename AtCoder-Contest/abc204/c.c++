# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n,m;
    cin >> n>>m;
    int a[m];
    int b[m];
    vector<int> d(m,0);
    vector<int> e(m,0);

    rep(i,m){
        cin >> a[i] >> b[i];
        d[a[i]] =1;
        e[b[i]] =1;
    }
    int out = 0;
    rep(i,m){
        rep(j,m){
            if(d[i] == 1 && e[j] ==1){
                out ++;
            }
        }
    }

    

    cout << out <<endl;

    

}

