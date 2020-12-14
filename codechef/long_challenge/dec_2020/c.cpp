/*
Author : ahampriyanshu
Problem:VACCINE2
Contest: DEC20B
Platform: Codechef
Time: 7-DEC-2020 15:14
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, i, magnet, iron, n, d, a, k, cells, p, min_mi, max_mi, r, ans, sum, ele, gcd, dish, last, sec;
string str;

void solve()
{
    ll risk = 0, riskfree = 0;
    cin >> n >> d;
    r = d - 1;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a >= 80 || a <= 9)
        {
            risk++;
        }
        else
        {
            riskfree++;
        }

    }

    cout << ((risk + r) / d) + ((riskfree + r) / d) <<"\n";
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