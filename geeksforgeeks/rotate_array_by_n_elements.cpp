#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, n, d,i;

void solve()
{
    cin >> n >> d;
    vector<ll> vec(n);

    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for(i=d ; i<n; i++)
    {
        cout<<vec[i]<<" ";
    }
    for(i=0 ; i<d; i++)
    {
        cout<<vec[i]<<" ";
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