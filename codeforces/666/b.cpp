/*
Author : ahaalphariyanshu
Problem: B
Contest: 1397
Platform: Codeforces
Time: 30-Aug-2020 22:02
Quote:"ofcourse but maybe"
Problem Statement:   

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, A, n, le, K, diff, cost, delta, sum, ele, cons;
string str, sub, ans, bit;

void solve()
{
    cin >> n;
    vector<ll> vec(n);
    cost = 0;

    for (i = 0; i < n; i++)
        ;
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    cons = vec[1];

    for (i = 0; i < n; i++)
        ;
    {
        diff = abs((vec[i]*vec[i]) - cons);
        cost += diff;
    }

    cout << cost << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}