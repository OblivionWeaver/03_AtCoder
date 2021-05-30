#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string str = "hello";
  cout << str.at(0) << endl; // h
  cout << str.at(4) << endl; // o
  string s, t;
  getline(cin, s); // 変数sで入力を一行受け取る
  getline(cin, t); // 変数tで入力を一行受け取る
 
  cout << "一行目 " << s << endl;
  cout << "二行目 " << t << endl;
}