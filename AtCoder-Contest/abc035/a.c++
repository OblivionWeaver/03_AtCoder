# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int w,h;
    cin >> w >> h;
    if(3*w == 4*h) cout <<  "4:3" << endl;
    else cout << "16:9" << endl;

}