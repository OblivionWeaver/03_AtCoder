# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int n;
    long long y;
    cin >> n >> y;
    int A=-1;
    int B = -1;
    int C = -1;
    for(int i=0;i<=n;i++){
        for(int j=0;j <= n-i;++j){
            int c = n-i-j;
            if(10000*i+ 5000*j+1000*c == y) {
                A = i;
                B = j;
                C = c;
            }
        }
    }
    printf("%d %d %d\n",A,B,C);
}

