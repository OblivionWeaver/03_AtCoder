#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(void)
{
    vector<char> str;
    string ans = "", temp;
    int n;

    cin >> temp;
    cin >> n;
    for (int i = 0; i < 5; i++)
        str.push_back(temp[i]);

    sort(str.begin(), str.end());
    ans += str[(n - 1) / 5];
    ans += str[(n - 1) % 5];

    cout << ans << endl;

    return 0;
}