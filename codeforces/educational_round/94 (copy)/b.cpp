/*
Author : ahampriyanshu
Problem: B
Contest: 1430
Platform: Codeforces
Time: 11-Oct-2020 16:17
Quote:"I in ID stands of I and D stands for dentification"
Problem Statement:   
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, ele, A, n, k, diff, sum, i,ans, len;

void solve()
{
    cin >> n >> k;
    bool flag = false;
    vector<ll> vec;

    for (i = 0; i < n; i++)
    {
        cin >> ele;
        if (ele > 0)
        {
            flag = true;
            vec.push_back(ele);
        }
    }

    sort(vec.begin(), vec.end(), greater<int>());

    if (flag)
    {
        ans = vec[0];
        for (auto it = vec.begin() + 1; it != vec.end() && k > 0; ++it)
        {
            ans += *it;
            k--;
        }
    }
    else
    {
        ans = 0;
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