# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)


int main(){
    while(1){
        string x;
        cin >> x;
        if(x == "0") break;
        int sum=0;
        rep(i,x.size()){
            sum += x[i] - '0';
        }
        cout << sum << endl;
    }
}