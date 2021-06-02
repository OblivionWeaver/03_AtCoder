# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)


int main(){
    while(1){
        string n;
        cin >> n;
        if(n=="0"){
            break;
        }
        int ans=0;
        for(int i=0; i<(int)n.length(); i++){
            ans += n[i]-'0';
        }
        cout << ans << endl;
    }
    return 0;
}