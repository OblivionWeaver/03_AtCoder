# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    string a;
    string b;
    cin >>a;
    cin >> b;
    if(a[0] == b[2] && a[1] == b[1] && a[2] == b[0]) cout << "YES" << endl;
    else cout << "NO" << endl;
}