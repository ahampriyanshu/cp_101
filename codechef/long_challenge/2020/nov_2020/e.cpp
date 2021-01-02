/*
Author : ahampriyanshu
Problem: UNSQUERS
Contest: NOV20B
Platform: Codechef
Time: 16-Nov-2020 14:45
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, n, q, s, x, y, l, r, lm, rm, cnt, last, ans, mx;

void solve()
{

  cin >> n >> q >> s;
  ll arr[1010][1010] = {0};
  ll h_i[n];

  for (i = 0; i < n; i++)
  {
    cin >> h_i[i];
  }

  last = 0;

  for (i = 0; i < n; i++)
  {
    mx = h_i[i],cnt = 1;
    arr[i][i] = cnt;

    for (j = i + 1; j < n; j++)
    {
      if (mx < h_i[j])
      {
        mx = h_i[j];
        cnt = cnt + 1;
      }
      arr[i][j] = cnt;
    }
  }

  for (i = 0; i < q; i++)
  {
    cin >> x >> y;

    l = (x + (s * last) - 1) % n + 1;
    r = (y + (s * last) - 1) % n + 1;

    lm = min(l, r) - 1;
    rm = max(l, r) - 1;

    ans = 0;
    for (ll j = lm; j <= rm; j++)
    {
      ans = max(arr[j][rm], ans);
    }

    last = ans;
    cout << last << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  solve();
}