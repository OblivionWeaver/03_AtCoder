# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long out =0;
    while(1){
        bool oddi = false;
        rep(i,n){
            if(a[i] %2 !=0) oddi = true;
            else {
                a[i] /=2;
            }
        }
        if (oddi == true) break;
        out ++;
    }
    cout << out << endl;

}

