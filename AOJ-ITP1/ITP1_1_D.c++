#include <bits/stdc++.h>
using namespace std;

int main(){
    int S;
    cin >> S;
    int h,m,s=0;
    h = S/3600;
    S%= 3600;
    m = S/60;
    S%=60;
    s = S;

    cout << h <<":"<< m<<":"<< s<< endl;

}