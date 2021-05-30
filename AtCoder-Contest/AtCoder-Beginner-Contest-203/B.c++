# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for (int i=0;i<(n);++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,k;
    cin >> n>>k;
    int f= n*100;
    int count =0;
    for(int j=1;j<=n;j++){
        for(int i =1;i<=k;++i){
            count += j*100 + i;
        }
    } 
    cout << count <<endl;
}