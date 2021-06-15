# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int a;
    int max=0;
    cin >> a;
    rep(i,a+1){
        int sal = i*(a-i);
        if(sal > max) max = sal;
    }
    cout << max << endl;
}