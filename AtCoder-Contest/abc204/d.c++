# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n;
    cin >> n;
    vector<long long > t(n);
    rep(i,n){
        cin >> t[i];
    }
    sort(t.begin(),t.end());
    reverse(t.begin(),t.end());
    long long a=0;
    long long b=0;
    rep(i,n){
        if(a >b){
            b+=t[i];
        }
        else if(b>a){
            a+=t[i];
        }
        else{
            a+=t[i];
        }
        
        
    }
    long long out = max(a,b);
    cout << out << endl;


}

