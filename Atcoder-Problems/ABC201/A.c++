# include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> A(3);
  cin >> A[0]>>A[1]>>A[2];
  sort(A.begin(),A.end());
  string ans;
  if (A[2]-A[1]==A[1]-A[0]){
    ans = "Yes";
  }
  else{
    ans = "No";
  }
  cout << ans << endl;
}