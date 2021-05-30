#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int answer = min(10, 5);
 
    cout << answer << endl; // 5
}

#include <bits/stdc++.h>
using namespace std;
 
int main2() {
    vector<int> vec = {1, 5, 3};
    reverse(vec.begin(), vec.end()); // {3, 5, 1}
 
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}