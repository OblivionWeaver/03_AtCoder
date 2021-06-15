# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    int  n;
    cin >> n;
    if(n<60) cout << "Bad" << endl;
    else if(60<= n && n <90) cout  << "Good" << endl;
    else if (90<= n && n<=99) cout << "Great" <<endl;
    else if(n ==100)cout << "Perfect" << endl;
}