# include <bits/stdc++.h>
# include <algorithm>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> sum(n,0);
    rep(i,n){
        cin >> a[i] >> b[i];
        sum[i] = a[i] + b[i];
    };
    long long  max = *max_element(sum.begin(),sum.end()) ;
    cout <<  max  << endl;


}