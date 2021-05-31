# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)

int main(){
    int h,w;
    do{
        cin >> h >> w;
        rep(i,h){
            rep(j,w){
                if((0<i && i<h-1) && (0<j && j<w-1)){
                    cout << ".";
                }
                else{
                    cout << "#";
                }
            }
            cout <<endl;
        }
        cout << endl;


    }while(h != 0 || w !=0);
}