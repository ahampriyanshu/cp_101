/*
Author : constusername
Problem: A
Contest: 1401
Platform: Codeforces
*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
ll i, j, test, A, B, K, diff, ans, med;
 
void solve()
{
    cin >> A >> K;
    ans = 0;
    if (K == 0)
    {
        if (A & 1)
            ans = 1;
        else
            ans = 0;
    }
    else
    {
        if (A < K)
        {
            ans = K - A;
        }
        else
        {
            if (abs(K - A) & 1)
            {
                ans = 1;
            }
            else
            {
                ans = 0;
            }
        }
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