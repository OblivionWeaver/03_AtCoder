# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int out = 0;
    int n;
    cin >> n;
    rep1(i,n){
        if(i%15 ==0){
            out -=200;
        }
        out +=800;
    }
    cout << out << endl;

}