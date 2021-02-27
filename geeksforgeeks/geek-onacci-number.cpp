#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, a, b,c,n, d,i,ele;

void solve()
{
    cin >> a >> b>> c >> n ;
    vector<int> vec(n);
    vec[0] = a;
    vec[1] = b;
    vec[2] = c;
    for (i = 3; i < n; i++)
    {
        vec[i] = vec[i-1] +vec[i-2] + vec[i-3];
    }

    cout << vec[n-1];

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