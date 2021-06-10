# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    bool exist =false;
    // (1<<n)は2^Nを示す.
    for(int bit = 0;bit< (1<<n);++bit){
        int sum = 0;
        rep(i,n){
            //a & bはビット積(a == b == 1のときtrue)
            if(bit & (1 << i)){
                sum += a[i];
            }
        }
        if(sum == w) exist = true;
    }
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl; 

}



