# include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A(N);

    for (int i=0;i<N;i++){
        cin >> A.at(i);
    }

    int S = 0;
    int Av;

    for (int j=0;j<N;j++){
        S += A.at(j);
    }
    Av = S/N;
    for (int i=0;i<N;i++){
        if (A.at(i) > Av){
            cout << A.at(i) - Av << endl;
        }
        else{
            cout << Av - A.at(i) << endl;
        }
    }

}