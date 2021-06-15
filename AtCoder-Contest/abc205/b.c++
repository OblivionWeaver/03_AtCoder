# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    string out = "Yes";
    rep(i,n)
    {
        if(a[i] !=i+1){
            out = "No";
        }
    }
    cout<<out<<endl;

}