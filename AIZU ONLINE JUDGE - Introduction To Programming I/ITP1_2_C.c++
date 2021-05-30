# include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);++i)

int main(){
    vector<int> IN(3);
    rep(i,3){
        cin >> IN[i];
    }
    sort(IN.begin(),IN.end());
    
    cout << IN[0]<<" "<<IN[1] << " " <<IN[2] << endl;
}
