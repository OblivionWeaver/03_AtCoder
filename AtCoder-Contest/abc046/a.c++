# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;
int a,b,c;
int out =1;
int main(){
    cin >> a >> b >> c;
    if((a == b&& b!=c )|| (a==c && c!=b) || (b==c && a!=b)) out = 2;
    else if(a == b && b ==c) out =1;
    else out = 3;
    cout << out << endl;
}