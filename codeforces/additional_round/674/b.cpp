/*
Author : ahampriyanshu
Problem: B
Contest: 1408
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, n, x, t, k, y, ans, ele;
set<ll> st;

void solve()
{
    ll n, k;
    cin >> n >> k;
    st.clear();
    ll sum = 0;

    for (i = 0; i < n; i++)
    {
        cin >> ele;
        sum += ele;
        st.insert(ele);
    }

    ll unique = st.size();
    if (sum == 1)
    {
        ans = -1;
    }
    else if (k == 1 && unique == 1)
    {
        ans = 1;
    }
    else if (k < 2)
    {
        ans = -1;
    }
    else
    {
        ans = (unique - 1) / (k - 1);
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