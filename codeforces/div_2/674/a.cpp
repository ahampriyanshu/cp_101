/*
Author : ahampriyanshu
Problem: A
Contest: 1408
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, n, x, t, k, y, ans, ele;

void solve()
{
    ll count = 0;
    cin >> n;
    vector<ll> vec(3 * n);
    for (i = 0; i < 3 * n; i++)
    {
        cin >> vec[i];
    }

    for (i = 0; i < 3 * n; i++)
    {
        if (vec[i] != vec[i+1])
        {
            cout<< vec[i] <<" ";
            count++;
        }

        if ( count == n)
        {
            break;
        }
    }

    cout << endl;
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