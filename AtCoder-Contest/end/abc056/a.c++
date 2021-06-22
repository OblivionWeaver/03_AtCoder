# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    bool out =true;
    char a,b;
    cin >> a >> b;
    if(a=='H'){
        if(b =='H') out = true;
        else out = false;
    }
    else{
        if(b =='H') out = false;
        else out =true;
    }

    if(out == true) cout << "H" << endl;
    else cout << "D" << endl;


}