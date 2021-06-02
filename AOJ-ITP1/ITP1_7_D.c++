# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n) ;++i)

int main(){
    int n,m,l;
    cin >> n >> m >> l;
    vector<vector<int> > a(n,vector<int>(m,0));
    vector<vector<int> > b(m,vector<int>(l,0));
    long long int out[n][l];
    rep(i,n){
        rep(j,l){
            out[i][j] =0;
        }
    }
    
    rep(i,n){
        rep(j,m){
            cin >> a[i][j];
        }
    }
    rep(i,m){
        rep(j,l){
            cin >> b[i][j];
        }
    }
    rep(i,n){
        rep(j,m){
            rep(k,l){
                out[i][k] += a[i][j] *b[j][k];
            }
        }
    }
    rep(i,n){
        rep(j,l){
            if(j==l-1){
                printf("%lld",out[i][j]);
            }
            else{
                printf("%lld ",out[i][j]);
            }
        }
        cout <<endl;
    }

}