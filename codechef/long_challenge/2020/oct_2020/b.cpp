/*
Author : ahampriyanshu
Problem: CVDRUN
Contest: CHEFEZQ
Platform: CodeChef
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll i, test, n, k, x, y;

void solve()
{
    cin >> n >> k;
    ll arr[n];
    ll carry = 0;
    ll ans = 0;
    ll sum = 0;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        ans++;
        sum = arr[i] + carry;
        if (sum < k)
        {
            sum = 0;
            break;
        }
        else
        {
            sum -= k;
            carry = sum;
        }
    }

    if (sum > 0)
    {
        ans += (sum / k) + 1;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
        solve();
        cout << "\n";
    }
}
