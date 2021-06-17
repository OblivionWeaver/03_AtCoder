# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    string s1,s2,s3;
    char dif = 'A' -'a';
    cin >> s1 >> s2 >> s3;
    printf("%c%c%c\n",s1[0]+dif,s2[0] +dif,s3[0]+dif);
}