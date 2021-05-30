# include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    char a = '+';
    char b = '-';

    int i = 1;
    for (int j =1; j<S.size(); j++){
        if (S.at(j) == a){
            i++;
        }
        else if (S.at(j)== b){
            i--;
        }
    }
    cout << i << endl;
}