# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    string key = "p";
    string out ;
    if(key == "p"){
        if(abs(c) %2 == 0){
            if(abs(a)-abs(b) >0) out = ">";
            else if(abs(a) -abs(b)<0) out = "<";
            else out = "=";
        }
        else{
            if(a-b > 0) out =">";
            else if(a-b <0) out = "<";
            else out ="=";
        }
        
    }
    cout << out << endl;

}
