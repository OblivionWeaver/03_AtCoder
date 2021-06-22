# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    bool out = false;
    int a,b;
    cin >> a >> b;

    if(a%3==0) out =true;
    if(b%3==0) out = true;
    if((a+b)%3 == 0) out = true;

    if(out == true) printf("Possible\n");
    else printf("Impossible\n");
}