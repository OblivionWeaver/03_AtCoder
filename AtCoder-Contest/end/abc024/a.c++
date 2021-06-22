# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int s,t;
    int out =0;
    cin >> s >> t ;
    if(s+t >=k){
        out = s*a + t*b -(s+t)*c;
    } 
    else out = s*a+t*b;
    cout << out << endl;

}