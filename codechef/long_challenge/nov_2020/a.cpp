/*
Author : ahampriyanshu
Problem:ADADISH
Contest: NOV20B
Platform: Codechef
Time: 15-Nov-2020 15:29
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, i, n, ans, sum, ele, gcd, dish, last, sec;

void solve()
{
    cin >> n;
    vector<ll> vec(n);

    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end(), greater<ll>());

    ans = vec[0];
    dish = vec[0];
    if (n != 1)
    {
        for (i = 1; i < n; i++)
        {
            if (dish >= vec[i])
            {
                dish = dish - vec[i];
            }
            else
            {
                dish = vec[i] - dish;
                ans += dish;
            }
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
