# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    int Alice =0;
    int Bob = 0;
    rep(i,n){
        if(i%2 == 0) Alice += a[i];
        else Bob += a[i];
    }
    cout << Alice -Bob << endl;
}