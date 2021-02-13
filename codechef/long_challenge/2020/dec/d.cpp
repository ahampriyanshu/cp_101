/*
Author : ahampriyanshu
Problem: POSPREFS
Contest: DEC20B
Platform: Codechef
Time: 8-DEC-2020 11:34
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, i, n, k, diff, ele;

void solve()
{
    cin >> n >> k;
    diff = n - k;
    for (i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            if (diff)
            {
                ele = -i;
                diff--;
            }
            else
            {
                ele = i;
            }
        }
        else
        {
            if (k)
            {
                ele = i;
                k--;
            }
            else
            {
                ele = -i;
            }
        }
        cout << ele << " ";
    }

    cout << "\n";
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