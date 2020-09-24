/*
Author : ahampriyanshu
Problem:BOWLERS
Contest: COOK122B
Platform: Codechef
Time: 20-Sept-2020 22:05
Quote:"You are this much above New Orleans"
Problem Statement:  
In a cricket game, an over is a set of six valid deliveries of balls performed by one player ― the bowler for this over.

Consider a cricket game with a series of N overs (numbered 1 through N) played by K players (numbered 1 through K). Each player may be the bowler for at most L overs in total, but the same player may not be the bowler for any two consecutive overs. Assign exactly one bowler to each over in such a way that these rules are satisfied or determine that no such assignment exists.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers N, K and L.
Output
For each test case:

If there is no valid assignment of bowlers to overs, print a single line containing the integer −1.
Otherwise, print a single line containing N space-separated integers. For each valid i, the i-th of these integers should be the number of the player assigned as the bowler for the i-th over.
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, n, k, l, i, ans, sum, ele, gcd, last, sec;

void solve()
{
    cin >> n >> k >> l;
    vector<ll> overs;

    if ((l * k < n) || (k <= 1 and n > 1))
    {
        cout << -1;
    }
    else
    {

        for (i = 1; i <= n; i++)
        {
            overs.push_back(i);
        }

        for (i = 0; i < n; i++)
        {
            cout << overs[i % k] << " ";
        }

    }

    overs.clear();
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