# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)

int main(){
    int h,w;
    do{
        cin >> h >> w;
        int S = 0;
        rep(i,h){
            rep(j,w){
                if(i % 2 ==0){
                    if(j %2  ==0){
                        cout << "#";
                    }
                    else{
                        cout << ".";
                    }
                }
                else{
                    if(j %2 == 0){
                        cout << ".";
                    }
                    else{
                        cout << "#";
                    }
                }
            }
            cout <<endl;
        }
        cout << endl;


    }while(h != 0 || w !=0);
}