# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int out ;
    if(n%100==0) out = n/100;
    else out = (n/100) +1;
    cout << out << endl;;

}