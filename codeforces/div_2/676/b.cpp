/*
Author : ahampriyanshu
Problem: A
Contest: 1421
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, n, x, k, y, ele, ans, med;

void solve()
{
    char a[201][201];
    int n, ans = 0;
    int b[2][2];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    if (a[1][0] == '0' && a[0][1] == '0')
    {
        if (a[n - 2][n - 1] == '1' && a[n - 1][n - 2] == '1')
            ans = 0;
        else if (a[n - 2][n - 1] == '0' || a[n - 1][n - 2] == '0')
        {
            if (a[n - 2][n - 1] == '0')
            {
                b[ans][0] = n - 2 + 1;
                b[ans][1] = n - 1 + 1;
                ans++;
            }
            if (a[n - 1][n - 2] == '0')
            {
                b[ans][1] = n - 2 + 1;
                b[ans][0] = n - 1 + 1;
                ans++;
            }
        }
    }
    else if (a[1][0] == '1' && a[0][1] == '1')
    {
        if (a[n - 2][n - 1] == '0' && a[n - 1][n - 2] == '0')
            ans = 0;
        else if (a[n - 2][n - 1] == '1' || a[n - 1][n - 2] == '1')
        {
            if (a[n - 2][n - 1] == '1')
            {
                b[ans][0] = n - 2 + 1;
                b[ans][1] = n - 1 + 1;
                ans++;
            }
            if (a[n - 1][n - 2] == '1')
            {
                b[ans][1] = n - 2 + 1;
                b[ans][0] = n - 1 + 1;
                ans++;
            }
        }
    }
    else if (a[n - 2][n - 1] == '0' && a[n - 1][n - 2] == '0')
    {
        if (a[1][0] == '1' && a[0][1] == '1')
            ans = 0;
        else if (a[1][0] == '0' || a[0][1] == '0')
        {
            if (a[1][0] == '0')
            {
                b[ans][0] = 1 + 1;
                b[ans][1] = 0 + 1;
                ans++;
            }
            if (a[0][1] == '0')
            {
                b[ans][1] = 0 + 1;
                b[ans][0] = 1 + 1;
                ans++;
            }
        }
    }
    else if (a[n - 2][n - 1] == '1' && a[n - 1][n - 2] == '1')
    {
        if (a[1][0] == '0' && a[0][1] == '0')
            ans = 0;
        else if (a[1][0] == '1' || a[0][1] == '1')
        {
            if (a[1][0] == '1')
            {
                b[ans][0] = 1 + 1;
                b[ans][1] = 0 + 1;
                ans++;
            }
            if (a[0][1] == '1')
            {
                b[ans][1] = 0 + 1;
                b[ans][0] = 1 + 1;
                ans++;
            }
        }
    }
    else if (a[0][1] == '0' && a[1][0] == '1')
    {
        b[ans][0] = 0 + 1;
        b[ans][1] = 1 + 1;
        ans++;
        if (a[n - 1][n - 2] == '1')
        {
            b[ans][1] = n - 2 + 1;
            b[ans][0] = n - 1 + 1;
            ans++;
        }
        else if (a[n - 2][n - 1] == '1')
        {
            b[ans][0] = n - 2 + 1;
            b[ans][1] = n - 1 + 1;
            ans++;
        }
    }
    else if (a[0][1] == '1' && a[1][0] == '0')
    {
        b[ans][0] = 0 + 1;
        b[ans][1] = 1 + 1;
        ans++;
        if (a[n - 1][n - 2] == '0')
        {
            b[ans][1] = n - 2 + 1;
            b[ans][0] = n - 1 + 1;
            ans++;
        }
        else if (a[n - 2][n - 1] == '0')
        {
            b[ans][0] = n - 2 + 1;
            b[ans][1] = n - 1 + 1;
            ans++;
        }
    }

    cout << ans << endl;
    for (int i = 0; i < ans; i++)
        cout << b[i][0] << " " << b[i][1] << endl;
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
