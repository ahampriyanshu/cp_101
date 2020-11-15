/*
Author : ahampriyanshu
Problem: D
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
    vector<ll> g;
    bool empty = true;
    ans = 0;

    for (i = 0; i < n; i++)
    {
        cin >> g[i];

        if (i == 0)
        {
            ele = g[i];
        }
        else
        {
            if (ele != g[i])
            {
                empty = false;
            }
        }
    }

    if (empty)
    {
        ans = -1;
    }
    else
    {
        ll vec = g[0];
 		ll vec2 = -1;
 		vector<ll> rootmembers;
 		vector<pair<ll, ll>> res;
         i = 1;
 		while(i <= n-1) {
         if(g[i] != vec) {
         	if(vec2 == -1) vec2 = i+1;
            res.push_back(make_pair(1, i+1));
         } else {
           rootmembers.push_back(i+1);
         }
 		}
 		for(ll el : rootmembers) {
 			res.push_back(make_pair(vec2, el));
 		} 
 		cout << "YES\n";
 		for(auto mfs : res) {
 			cout << mfs.first << " " << mfs.second << "\n";
 		}
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
