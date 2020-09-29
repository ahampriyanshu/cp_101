/*
Author : ahampriyanshu
Problem: C
Contest: 1405
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, n, k,input, i, ans;
string str;

void solve()
{
    ll zero,one,que;
    cin >> n >> k >> str;
    zero = count(str.begin(), str.end(), '0');
    one = count(str.begin(), str.end(), '1');
    que = count(str.begin(), str.end(), '?');

    if ( zero == one && zero == k/2-1)
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