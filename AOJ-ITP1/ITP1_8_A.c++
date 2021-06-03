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

// 小文字・大文字の判定・変換は cctype （C++言語の場合）をインクルードすることにより、以下の関数を使うことができます：

// int isalpha(char ch): ch がアルファベットなら true を返す
// int isdigit(char ch): ch が数字なら true を返す
// int islower(char ch): ch が小文字なら true を返す
// int isupper(char ch): ch が大文字なら true を返す
// int tolower(char ch): ch の小文字を返す
// int toupper(char ch): ch の大文字を返す