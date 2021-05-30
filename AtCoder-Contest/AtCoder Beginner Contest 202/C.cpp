# include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int count =0;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);
    for (int i =0;i<N;i++){
        cin >> A.at(i);
    }
    for (int i =0;i<N;i++){
        cin >> B.at(i);
    }for (int i =0;i<N;i++){
        cin >> C.at(i);
    }
    for (int k=0;k<N;k++){
        for (int j=0;j<N;j++){
            int  K= C.at(j);
            if (1<= K <= N){
                if(A.at(k) == B.at(K-1)){
                count+=1;}
            }
            
        }
    }
    cout << count <<endl;
}