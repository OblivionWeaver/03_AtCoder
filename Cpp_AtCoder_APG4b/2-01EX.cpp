# include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> data(5);
    for (int i= 0;i<data.size();i++){
        cin >> data.at(i);
    }
    int c = 0;
    for (int i= 0;i<(data.size()-1); i++){
        if (data.at(i) == data.at(i+1)){
            c++;
            break;
        }
    }
    if(c == 1){
        cout << "YES"<< endl;
    }
    else{
        cout << "NO" << endl;
    }
}