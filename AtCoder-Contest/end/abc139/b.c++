# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int a,b;
    cin >> a >> b;
    int out =0;
    if((b-1)%(a-1)==0) out = (b-1)/(a-1);
    else out = (b-1)/(a-1)+1;
    cout << out << endl;
}