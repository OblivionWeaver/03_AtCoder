# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n,v;
    cin >> n >> v;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int found_id = -1;
    rep(i,n){
        if(a[i] == v){
            if(found_id < i){
                found_id = i;
            }
        }
    }
    cout << found_id << endl;

}

