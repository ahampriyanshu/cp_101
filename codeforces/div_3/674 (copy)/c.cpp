/*
Author : ahampriyanshu
Problem: C
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
    int n;
    cin >> n;
    set<int> gangs;
    vector<int> g;
    forn(i, n)
    {
        int x;
        cin >> x;
        gangs.insert(x);
        g.pb(x);
    }
    if (gangs.size() == 1)
    {
        cout << "NO\n";
    }
    else
    {
        int gangroot = g[0];
        int secondpiv = -1;
        vi rootmembers;
        vii res;
        REP(i, 1, n - 1)
        {
            if (g[i] != gangroot)
            {
                if (secondpiv == -1)
                    secondpiv = i + 1;
                res.pb(mp(1, i + 1));
            }
            else
            {
                rootmembers.pb(i + 1);
            }
        }
        for (int el : rootmembers)
        {
            res.pb(mp(secondpiv, el));
        }
        cout << "YES\n";
        for (ii mfs : res)
        {
            cout << mfs.first << " " << mfs.second << "\n";
        }
    }
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
