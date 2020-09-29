/*
Author : ahampriyanshu
Problem: B
Contest: 1405
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, n, input, i, ans, med;

void solve()
{
    cin >> n;
    ll plus = 0;
    ans = 0;
    i = 0;
    while (i < n)
    {
        cin >> input;
        if (input <= 0)
        {
            input *= -1;
            if (plus > input)
            {
                plus -= input;
            }
            else
            {
                ans += (input - plus);
                plus = 0;
            }
        }
        else
        {
            plus += input;
        }
        i++;
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