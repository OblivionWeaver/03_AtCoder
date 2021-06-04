# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# include <algorithm>

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int> >  a(h,vector<int>(w,0));
    vector<int> hsum(w);
    vector<int> wsum(h);

    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
            hsum[j] += a[i][j];
            wsum[i] += a[i][j];
        }
    }
    rep(i,h){
        rep(j,w){
            a[i][j] = hsum[j] +wsum[i] - a[i][j];
        }
    }

    rep(i,h){
        rep(j,w){
            if(j == w-1){
                cout << a[i][j] << endl;
            }
            else{
                printf("%d ",a[i][j]);  
            }
        }
    }

}

