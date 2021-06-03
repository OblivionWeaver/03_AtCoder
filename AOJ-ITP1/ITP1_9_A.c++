# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)

int main(){
    string a;
    cin >> a;
    int count =0;
    int asize = a.size();
    while(1){
        string b = "";
        string in;
        cin >> in;
        int insize = in.size();
        if(in == "END_OF_TEXT"){
            break;
        }
        rep(i,insize){
            b +=tolower(in[i]);
        }
        if(b== a){
            count ++;
        }
    }
    return 0;
}