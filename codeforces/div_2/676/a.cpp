/*
Author : ahampriyanshu
Problem: A
Contest: 1421
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, a,aa,bb, b, test, n, x, k, y, ele, ans, med;

void solve()
{
    cin >> a >> b;
    j = 0, x = 0;
    aa = a, bb = b;

    while (a || b)
    {

        if ((a & 1) && (b & 1))
        {

            x += (1 << j);
        }

        a >>= 1;
        b >>= 1;
        j += 1;
    }
    cout << (aa ^ x) + (bb ^ x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
        solve();
        cout << endl;
    }
}
