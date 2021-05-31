#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=1;i<=(n);++i)

int main(){
    int h,w;
    do{
        cin>>h>>w;
        rep(i,h){
            rep(j,w){
                cout << "#";
            }
            cout <<endl;
        }
        cout << endl;
    }while(h!=0 || w!=0);
    return 0;

}