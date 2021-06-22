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
    int A;
    if(a > b){
        if(b ==1) A = 2;
        else A= 1;
    }
    else if(a<b){
        if(a ==1) A = 1;
        else A = 2;
    }
    else if(a == b){
        A = 0;
    }
    if(A == 0) cout << "Draw" <<endl;
    else if(A ==1) cout << "Alice" <<endl;
    else if(A==2)cout<<"Bob" <<endl;

}