#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)

int main()
{
    int n, q;
    cin >> n >> q;
    vector<double> a(n);
    double size = 10E18;
    vector<bool> d(1E5, true);
    rep(i, n)
    {
        cin >> a[i];
        d[a[i]] = false;
    }
    vector<double> out(q);
    vector<double> k(q);
    rep(i, q) cin >> k[i];
    rep(i, size)
    {
        if (i == 0)
        {
        }
        else
        {
            if (d[i] == true)
            {
                out.push_back(i);
            }
        }
    }
    rep(i, q)
    {
        cout << out[k[i]];
    }
    cout << endl;
}