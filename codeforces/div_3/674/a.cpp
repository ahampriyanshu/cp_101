/*
Author : ahampriyanshu
Problem: A
Contest: 1426
Platform: Codeforces
*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
ll i, j, test, n, x, t, k, y, ans, ele;
 
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    cin >> n >> x;
 
    if(n <= 2)
    {
        ans = 1;
    }
    else
    {
    ele = n -2;
    if(ele%x == 0)
    {
        ans = (ele/x) + 1;
    }
    else
    {
        ans = (ele/x) + 2;
    }
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