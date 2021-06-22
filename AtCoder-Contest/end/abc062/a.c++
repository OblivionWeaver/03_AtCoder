# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int x,y;
    cin >> x >>y;
    map<int,int > g;
    g[1] = g[3] = g[5] = g[8]= g[10] = g[12] =1;
    g[4] = g[6] = g[9] = g[11] = 2;
    g[2] = 3;
    if(g[x] == g[y]) printf("Yes\n");
    else printf("No\n");



}