# include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)


int main(){
    int x ,y;
    cin >>x >>y;
    int out;
    if(x == y){
        out =x;
    }
    else if((x == 0 && y ==1) || (x==1 && y== 0)){
        out =2;
    }
    else if((x==2&& y==0)||(x==0&&y==2)){
        out =1;
    }
    else {
        out =0;
    }
    cout <<out<<endl;



}

