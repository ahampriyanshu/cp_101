#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, A, i, j, n, ele, last, lastTolast, cnt;

void solve()
{
  set<int, greater<int>> st;
  cin >> n;
  for (i = 0,last = 0,lastTolast = 0,cnt = 0; i < n; i++)
  {
    cin >> ele;
    if (ele != last && ele != lastTolast)
    {
      st.insert(ele);
      cnt = 1;
      lastTolast = 0;
    }
    else
    {
      if (ele == lastTolast)
      {
        cnt = 1;
      }
      cnt++;

      if (cnt < 3)
      {
        st.insert(ele + 1);
        lastTolast = ele + 1;
      }
    }
    last = ele;
  }

  cout << st.size() << endl;
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