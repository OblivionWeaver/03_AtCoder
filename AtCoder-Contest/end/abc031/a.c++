# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int a,d;
    cin >> a >> d;
    int at = (a+1) *d;
    int dt = a*(d+1);
    cout << max(at,dt) <<endl;
}