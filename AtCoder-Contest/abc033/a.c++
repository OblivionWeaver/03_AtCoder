# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    string n;
    cin >> n;
    if(n.at(0) == n.at(1) && n.at(1) == n.at(2) && n.at(2) == n.at(3)) cout << "SAME" << endl;
    else cout << "DIFFERENT"<< endl;
    

}