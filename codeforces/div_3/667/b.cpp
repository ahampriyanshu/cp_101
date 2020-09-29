/*
Author : ahampriyanshu
Problem: B
Contest: 1409
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll test, A, B, X, Y, N, a1, b1, ans;

void solve()
{

    cin >> A >> B >> X >> Y >> N;

    if (max(A - N, X) > max(B - N, Y))
    {
        b1 = max(B - N, Y);
        b1 = N - (B - b1);
        ans = max(A - b1, X) * max(B - N, Y);
    }
    else
    {
        a1 = max(A - N, X);
        a1 = N - (A - a1);
        ans = max(A - N, X) * max(B - a1, Y);
    }

    cout << ans << endl;
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