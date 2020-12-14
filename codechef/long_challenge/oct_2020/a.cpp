/*
Author : ahampriyanshu
Problem: CVDRUN
Contest: OCT20B
Platform: CodeChef
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll i, test, n, k, x, y;

void solve()
{

    cin >> n >> k >> x >> y;
    bool flag = false;

    if (y == x)
    {
        flag = true;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if ((x + k * i) % n == y)
            {
                flag = true;
                break;
            }
        }
    }

    if (flag)
        cout << "YES";
             
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N, K;
    for (cin >> test; test--;)
    {
        solve();
        cout << "\n";
    }
}
