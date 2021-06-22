# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int a,b,n;
    cin >> a;
    cin >> b;
    cin >>n;
    while(n%a !=0 || n% b != 0) ++n;
    cout << n << endl;


}