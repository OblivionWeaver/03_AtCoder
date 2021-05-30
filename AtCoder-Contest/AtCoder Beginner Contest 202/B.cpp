# include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    string S;
    cin >> S;
    reverse(begin(S),end(S));
    for (int i = 0;i<S.size();i++){
        
        if (S.at(i) == '0' || S.at(i) == '1' || S.at(i) == '8'){
            cout << S.at(i);
        }
        else if (S.at(i) == '6'){
            cout << "9";
        }
        else {
            cout << "6";
        }


    }
    cout<< endl;
}