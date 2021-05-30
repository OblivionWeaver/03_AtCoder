# include <bits/stdc++.h>
using namespace std;

int main(){
    int N,A,B;
    int out =0;
    cin >> N >> A >> B;
    int sum = 0;
    for (int i=0;i<=N;i++){
        int temp = i;
        int sumTemp = 0;
        while(temp!=0){
            sumTemp += temp % 10;
            temp /= 10;
            }
        
        if (A <= sumTemp && sumTemp <= B){
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}