# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
using namespace std;

template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int n,a,b;
int main(){
    cin >> n >> a >> b; 
    string s;
    cin >> s;
    int passcount = 0;
    int bc = 0;
    rep(i,n){
        if(s[i]=='a'){
            if(passcount < a+b){
                cout <<"Yes" << endl;
                passcount ++;
            }
            else cout << "No" << endl;
        }
        else if(s[i] == 'b'){
            bc ++;
            if(passcount <a+b && bc <=b) {
                cout << "Yes" << endl;
                passcount ++;
            }
            else cout << "No" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }


}