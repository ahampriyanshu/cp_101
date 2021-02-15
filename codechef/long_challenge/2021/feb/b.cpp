#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, n, i, ans, sum, ele, gcd, last, sec;

void solve()
{
    cin >> n;
    vector<ll> vec(n);

    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    cout << 2 * (*max_element(vec.begin(), vec.end()) - *min_element(vec.begin(), vec.end())) << endl;
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
