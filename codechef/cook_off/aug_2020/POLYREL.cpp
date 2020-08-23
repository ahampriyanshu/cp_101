/*
Author : ahampriyanshu
Problem:CHEFNWRK
Contest: POLYREL
Platform: Codechef
Time: 23-Aug-2020 00:07
Quote:"I in ID stands of I and D stands for dentification"
Problem Statement:   
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, A, N, K, diff, ans, sum, max_K, poly;

void solve()
{
    cin >> N;
    vector<ll> arr_x(N);
    vector<ll> arr_y(N);

    for (i = 0; i < N; i++)
    {
        cin >> arr_x[i];
        cin >> arr_y[i];
    }

    ans = N;
    poly = N / 2;
    
    while (poly >= 3)
    {
        ans += poly;
        poly = poly / 2;
    }

    cout << ans << endl;
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