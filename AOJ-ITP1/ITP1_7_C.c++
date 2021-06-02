# include <bits/stdc++.h>
# include <algorithm>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)

int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int> > a(r+1,vector<int>(c+1,0));
    int total =0;
    rep(i,r){
        int sum=0;
        rep(j,c){
            cin >> a[i][j];
            sum += a[i][j];
            a[r][j] += a[i][j];
        }
        a[i][c] = sum;
        total  += sum;
    }
    a[r][c] = total;
    
    rep(i,r+1){
        rep(j,c){
            printf("%d ",a[i][j]);
        }
        printf("%d\n",a[i][c]);
    }

}