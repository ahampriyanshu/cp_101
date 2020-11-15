/*
Author : ahampriyanshu
Problem: A
Contest: 1421
Platform: Codeforces
*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
ll i, j, test, n, x, k, y, ele, ans, med;
 
 
void solve()
{
    cin >> n >> k;
    vector<ll> vec(n);
    ll sum = 0;
 
    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
 
     sort(vec.begin(), vec.end()); 
 
     ele = vec[0];
 
    for (i = 1; i < n; i++)
    {
       x = (k - vec[i])/ele;
       sum += x;
    }
 
    cout << sum;
   
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
