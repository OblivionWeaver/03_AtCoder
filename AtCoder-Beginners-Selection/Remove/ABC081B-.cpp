# include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    
    int ns=10000;
    for (int j=0;j<N;j++){
        int count =0;
        while(A.at(j)%2==0){
            A.at(j) /=2;
            count++;

        if (count < ns){
            ns = count;
        }
    }

    }
    cout << ns << endl;
    
    return 0;
}