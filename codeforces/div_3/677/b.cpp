/*
Author : ahampriyanshu
Problem: B
Contest: 1433
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, n, m, x, a, b, c, d, t, k, y, ans, ele;

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    cin >> n;
    vector<ll> raw(n + 1);
    vector<ll> cont;
    ll ans = 0;

    for (i = 0; i < n; i++)
    {
        cin >> raw[i];
    }
    i = 1;
    while (i <= n)
    {
        if (raw[i - 1] == 1)
        {
            cont.push_back(i - 1);
        }
        i++;
    }

    i = 2;
    while (i <= cont.size())
    {
        ans += (cont[i - 1] - cont[i - 2] - 1);

        i++;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
        solve();
    }
}
