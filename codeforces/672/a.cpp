/*
Author : ahampriyanshu
Problem: A
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
    bool flag = false;
 
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    for (i = 0; i < n-1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            flag = true;
            break;
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
