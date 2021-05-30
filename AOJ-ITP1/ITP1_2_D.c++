# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i= 0;i<(n);++i)

int main(){
    int w,h,x,y,r;
    cin >> w >> h>>x>>y>>r;
    if ((r<=x && x<=w-r)&&(r<=y && y<=h-r)){
        cout << "Yes" <<endl;
    }
    else{
        cout <<"No" << endl;
    }
}