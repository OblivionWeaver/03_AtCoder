# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int X, A, B;
//---------------------------------------------------------------------------------------------------
int main()
{
    cin >> X >> A >> B;

    if (B - A <= 0)
        printf("delicious\n");
    else if (B - A <= X)
        printf("safe\n");
    else
        printf("dangerous\n");
}
