# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=1;i<(n) +1;++i)
// 全列挙
int main(){
    int n,x;
    while(1){
        cin >> n >> x;
        int ans =0;
        if (n== 0 && x == 0){
            break;
        }
        else {
            rep(i,n){
                rep(j,n){
                    rep(k,n){
                        if(i == j || i == k || j==k){
                        
                        }
                        else{
                            if(i+j+k ==x){
                                ans ++;
                            }

                        }
                    }
                }
            }
        }
       
        cout << ans/6 << endl;
        
    }
    
}