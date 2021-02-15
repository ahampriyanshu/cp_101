#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i,n,ele,times,ans;
    cin >> n;
    vector<int> weight(n+1,0), index(n+1, 0), jump(n+1, 0);

    for (i = 1; i <= n; i++)
    {
        cin >> ele;
        weight[i] = ele;
        index[weight[i]] = i;
    }

    for (i = 1; i <= n; i++)
    {
        cin >> ele;
        jump[ weight[i]] = ele;
    }

    ans = 0;

    for (i = 2; i <= n; i++)
    {
        if (index[i] <= index[i - 1])
        {
            times = (index[i - 1] - index[i] + jump[i] ) / jump[i];
            index[i] += jump[i]*times;
            ans += times;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;

    for (cin >> test; test--;)
    {
        solve();
    }
}
