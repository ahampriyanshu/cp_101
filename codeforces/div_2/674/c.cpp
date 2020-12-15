/*
Author : ahampriyanshu
Problem: C
Contest: 1408
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
    ll count = 0;
    ll rem, ans;
    ll mid = sqrt(n);
    
    if ((mid - 5) > 1)
    {
        a = mid - 5;
    }
    else
    {
        a = 1;
    }

    b = min(n, mid + 5);
    for (i = a; i <= b + 1; i++)
    {
        rem = n % i;
        ans = i + (n / i) - 2;
        if (rem > 0)
        {
            ans += 1;
        }
        ans = min(n, ans);
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
        cout << endl;
    }
}
