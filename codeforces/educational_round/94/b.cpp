/*
Author : ahampriyanshu
Problem: B
Contest: 1400
Platform: Codeforces
Time: 25-Aug-2020 20:43
Quote:"I in ID stands of I and D stands for dentification"
Problem Statement:   
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, A, N, K, diff, sum, len, ans;
ll p,f,cnt_sword,wgt_sword,cnt_axe,wgt_axe;

void solve()
{
   cin >> p >> f >> cnt_sword >> cnt_axe >> wgt_sword >> wgt_axe;
   cout << endl << p << f << cnt_sword << cnt_axe << wgt_sword << wgt_axe << endl;

if (p >= cnt_sword * wgt_sword + cnt_axe * wgt_axe || f >= cnt_sword * wgt_sword + cnt_axe * wgt_axe)
{
    cout << cnt_axe + cnt_sword<< endl;
}
else
{
    ans = 0;
    cout << 0 <<endl;
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