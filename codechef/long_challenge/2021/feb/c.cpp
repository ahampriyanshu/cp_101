#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, hh, mm, n, p, l, r;
char colon;
string period;

int calculate_time()
{

    cin >> hh >> colon >> mm >> period;
    if (hh == 12)
    {
        if (period == "AM")
        {
            hh = 0;
        }
    }
    else if (period == "PM")
    {
        hh += 12;
    }

    return ((hh * 60) + mm);
}

void solve()
{
    p = calculate_time();
    cin >> n;
    while (n--)
    {
        l = calculate_time();
        r = calculate_time();

        if ((l <= p) && (p <= r))
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
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
