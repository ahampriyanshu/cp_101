/*
Author : ahampriyanshu
Problem:VACCINE1
Contest: DEC20B
Platform: Codechef
Time: 7-DEC-2020 23:56
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, i, d1, v1, d2, v2, p, vt, dt, ans;

ll solve(ll day_min, ll day_max, ll vac)
{
    ans = day_min - 1;
    dt = day_max - day_min;

    if (dt * vac >= p)
    {
        ans += (p + vac - 1) / vac;
    }
    else
    {
        p -= (dt * vac);
        vt = v1 + v2;
        ans += ((p + vt - 1) / vt) + dt;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> d1 >> v1 >> d2 >> v2 >> p;

    if (d1 < d2)
    {
        cout << solve(d1, d2, v1);
    }

    else
    {
        cout << solve(d2, d1, v2);
    }
}