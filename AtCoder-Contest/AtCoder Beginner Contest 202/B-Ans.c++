# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for (int i= 0;i<(n);i++)

int main(){
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    rep(i,s.size()){
        if (s.at(i) == '6'){
            cout << "9";
        }
        else if(s.at(i) == '9'){
            cout <<"6";
        }
        else{
            cout <<s.at(i);
        }
    }
    cout << endl;
}