#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }
    vector<vector<char>> out(N,vector<char>(N,'-'));

    for (int i=0;i<M;i++){
        A.at(i)--;B.at(i)--;
        out.at(A.at(i)).at(B.at(i)) = 'o';  // AはBに勝った
        out.at(B.at(i)).at(A.at(i)) = 'x';  // BはAに負けた

    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << out.at(i).at(j);

            if(j==N-1){
                cout<<endl;
            }
            else {
                cout << " ";
            }
        }
    }
}