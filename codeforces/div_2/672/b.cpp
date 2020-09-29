/*
Author : ahampriyanshu
Problem: B
Contest: 1420
Platform: Codeforces
*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
ll i, j, test, n, x, B, K, ele, ans, med;
 
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    cin >> n;
    ll arr[n];
    ll zero[32] = {0};
    ll ans = 0;
    ll diff = 0;
 
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (i = 0; i < n; i++)
    {
        diff = log2(arr[i]);
        ans += zero[diff];
        zero[diff] += 1;
    }
    cout << ans;
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
