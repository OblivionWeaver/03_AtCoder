# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    char x,y;
    cin >> x >>y;
    char Q = max(x,y);
    if(x>y) cout<< ">" <<endl;
    else if(x<y) cout<< "<" <<endl;
    else if(x == y) cout<<"=" <<endl;

}