#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, i, m, n, ans,lim;

void solve()
{
    cin >> n >> m;
    vector<ll> john(n);
    vector<ll> jack(m);
    ll john_sum = 0, jack_sum = 0;
    bool possible = false;
    ans = 0;

    for (i = 0; i < n; i++)
    {
        cin >> john[i];
        john_sum += john[i];
    }

    for (i = 0; i < m; i++)
    {
        cin >> jack[i];
        jack_sum += jack[i];
    }

    if (john_sum > jack_sum)
    {
    possible = true;
    }
    else{

    sort(john.begin(), john.end());
    sort(jack.begin(), jack.end(), greater<ll>());

    lim = min(n,m);

    for (i = 0; i < lim ; i++)
    {
        
        john_sum += jack[i] - john[i];
        jack_sum += john[i] - jack[i];
        ans++;

        if (john_sum > jack_sum)
        {
            possible = true;
            break;
        }

    }

    }

    if(possible)
    {
    cout << ans << endl;
    }
    else
    {
    cout<<-1<< endl;
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
    }
}
