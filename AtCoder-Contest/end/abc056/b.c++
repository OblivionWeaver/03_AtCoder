#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)

int W, A, B;
//-----------------------------------------------------------------------------------
int main()
{
    cin >> W >> A >> B;
    if (A > B)
        swap(A, B);

    if (B <= A + W && A + W <= B + W)
        printf("0\n");
    else
        printf("%d\n", B - (A + W));
}