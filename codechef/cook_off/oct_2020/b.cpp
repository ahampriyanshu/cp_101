/*
Author : ahampriyanshu
Problem: DECREM
Contest: COOK123B
Platform: Codechef
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, n, k, l, i, r, ans, sum, ele, gcd, last, sec;

void solve()
{
    cin >> l >> r;

    if (r - l == r % l)
    {
        cout << r;
    }
    else
    {
        cout << -1;
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
        cout << endl;
    }
}