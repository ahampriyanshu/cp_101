/*
Author : ahampriyanshu
Problem:CHEFNWRK
Contest: COOK121B
Platform: Codechef
Time: 23-Aug-2020 22:43
Quote:"I in ID stands of I and D stands for dentification"
Problem Statement:   
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, A, N, K, diff, ans, sum, K;

void solve()
{
    cin >> N >> K;
    vector<ll> arr(N);
 
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    ans = 0; sum = 0;

    for (ll i : arr)
    {
        sum += i;
        if (sum < K)
            continue;

        if (sum >= K)
        {
            if (sum == K)
            {
                ans++;
                sum = 0;
                continue;
            }

            if (i > K)
            {
                ans = -1;
                break;
            }

            if ((sum - i) <= K)
            {
                ans++;
                sum = i;
            }
        }
    }

    if (sum > 0 && sum <= K)
 { 
           ans++;
    }

    cout << ans << "\n";
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