# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int a,b,c;
    int x;
    int out=0;
    cin >>a;
    cin >>b;
    cin >>c;
    cin >>x;
    rep(i,a+1){
        rep(j,b+1){
            rep(k,c+1){
                if(x == (500*i+100*j+50*k)){
                    out++;
                }
            }
        }
    }
    cout << out <<endl;
}

