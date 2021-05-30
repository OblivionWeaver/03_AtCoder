# include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N ;
    vector<int> vec1(N);
    vector<int> vec2(N);

    for (int i = 0;i<N;i++){
        cin >> vec1.at(i);
    }

    for (int j=0;j<N;j++){
        cin >> vec2.at(j);
    }

    for (int i = 0; i < N; i++) {
        cout << vec1.at(i) + vec2.at(i) << endl;
        }


}