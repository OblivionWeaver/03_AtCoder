#include <bits/stdc++.h>
using namespace std;

int sum_range(int a,int b){
    if (a == b){
        return a;
    }

    return sum_range(a,b-1) + b;
}

int array_sum(vector<int> &data,int i){
    if (i == data.size()){
        return 0;
    }
    int s = array_sum(data,i+i);
    return data.at(i) + s;

}

int main(){
    cout << sum_range(2,5) << endl;
}