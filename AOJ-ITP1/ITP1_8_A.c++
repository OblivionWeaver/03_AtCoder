#include<bits/stdc++.h>
using namespace std;
# include <algorithm>

char swap_case(char c){
    if(isupper(c)){
        return tolower(c);
    }
    else{
        return toupper(c);
    }
}

int main(){
    string str;
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),swap_case);
    cout << str << endl;
    return 0;
}