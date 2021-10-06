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
    int n;
    cin >> n;
    switch(n%10){
        case 2:
        case 4:
        case 5:
        case 7:
        case 9:
            puts("hon");
            break;

        case 0:
        case 1:
        case 6:
        case 8:
            puts("pon");
            break;
        case 3:
            puts("bon");
            break;
    }
    return 0;

}
