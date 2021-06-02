# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)

int main(){
    int n;
    cin >> n;
    //b棟f階のr番目の部屋にv人が追加で入居したことを示します。
    //4棟3階10部屋
    vector<vector<vector<int> > > T(4,vector<vector<int> >(3,vector<int>(10,0)));
    int b,f,r,v;
    rep(i,n){
        cin >> b >> f >> r >> v;
        T[b-1][f-1][r-1] += v;  
        if(T[b-1][f-1][r-1] <0){
            T[b-1][f-1][r-1] = 0;
        } 
    }

    rep(i,4){
        rep(j,3){
            rep(k,10){
                cout << " "<<T[i][j][k];
            }
            cout << endl;
        }
        if(i!=3){
            cout <<  "####################"<<endl;
        }
    }

}