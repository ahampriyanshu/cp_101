/*
Author : ahampriyanshu
Problem: A
Contest: 1405
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, n, x, B, K, diff, ans, med;

void solve()
{
    cin >> n;
    vector<ll> vec(n);
    x = n -1;

    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (i = x; i >= 0; i--)
    {
        cout << vec[i] << " ";
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