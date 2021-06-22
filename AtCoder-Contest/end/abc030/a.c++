# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    float a,b,c,d;
    cin >> a >> b >> c >>d;
    float al = b/a;
    float bl = d/c;

    if(al > bl) cout << "TAKAHASHI" << endl;
    else if(bl > al) cout << "AOKI" << endl;
    else if(bl == al) cout << "DRAW" << endl;


}