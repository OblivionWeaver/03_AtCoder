# include <bits/stdc++.h>
using namespace std;
namespace std {
  template <class T>
  T abs(const complex<T>& x);
}

int main(){
    int a,b,c;
    cin >> a >> b>>c;
    cout << abs(a-7)+abs(b-7)+abs(c-7) << endl;
}