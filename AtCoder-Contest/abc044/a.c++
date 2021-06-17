# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int n,k,x,y;
int out=0;
int main(){
    cin >> n >> k>> x >>y;
    rep1(i,n) {
        if(i<=k) out+=x;
        else out +=y;
    }
    cout << out << endl;

}
