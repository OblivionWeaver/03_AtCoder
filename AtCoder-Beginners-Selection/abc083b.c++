# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)

//桁和
int digsum(int n) {
    int res =0;
    while(n > 0) {
        res += n%10;
        n /=10;
    }
    return res;
}

int main(){
    int n,a,b;
    cin >> n >> a  >> b;
    int sum =0;
    rep1(i,n){
        int diig = digsum(i);
        if(a <= diig && diig <= b) {
            sum +=i;
        }
    } 
    cout << sum << endl;

}

