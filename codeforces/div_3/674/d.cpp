/*
Author : ahampriyanshu
Problem: D
Contest: 1426
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, n, m, x, a, b, c, d, t, k, y, N, ans, sum, ele;

ll solve(ll n)
{
    map<ll, ll> mp;
    mp[0] = 0;
    for (i = 1; i <= n; ++i)
    {
        cin >> a;
        sum += a;

        if (mp.count(sum) && mp[sum] >= ele)
        {
            ans++;
            ele = i - 1;
        }
        mp[sum] = i;
    }

    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    cout << solve(N);
}