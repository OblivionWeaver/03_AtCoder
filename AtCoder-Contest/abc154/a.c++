# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
using namespace std;

template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main(){
    string S,T,U;
    int A,B;
    cin >> S >> T;
    cin >> A >> B;
    cin >> U;
    if(U == S) A --;
    else B --;
    if(A < 0) A == 0;
    if(B < 0) B == 0;
    printf("%d %d\n",A,B);

}