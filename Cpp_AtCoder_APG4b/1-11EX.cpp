# include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A,B;
  cin >> N >> A;
  string op ;
  
 
  for (int i=0; i< N; i++){
      cin >> op >> B;
      if (op == "+"){
          A = A + B;
      }

      else if (op == "-"){
          A = A - B;
      }
    
      else if (op == "*"){
          A = A*B;
      }

      else if (op == "/" && B != 0 ){
          A = A/B;
      }

      else{
          cout << "error" << endl;
          break;
      }
// i +1に注意
      cout << i+1 << ":"<< A << endl;

  }
}