/*
Author : ahampriyanshu
Problem: WATMELON
Contest: LTIME88B
Platform: Codechef
Time: 26-Sept-2020 22:03
Quote:"Dogs are always in push up position"
Problem Statement:   
Consider a sequence A1,A2,…,AN, where initially, Ai=i for each valid i. You may perform any number of operations on this sequence (including zero). In one operation, you should choose two valid indices i and j, compute the greatest common divisor of Ai and Aj (let's denote it by g), and change both Ai and Aj to g.

You are given a sequence B1,B2,…,BN. Is it possible to obtain this sequence, i.e. change A to B, using the given operations?
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, n, ele;

void solve()
{
    cin >> n;
    bool flag = true;

    for (i = 0; i < n; i++)
    {
        cin >> ele;
        if ((i + 1) % ele != 0)
        {
            flag = false;
        }
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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