# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    const int lower = max(a,c);
    const int upper = min(b,d);

    cout << max(0,upper-lower) << endl;
    

}