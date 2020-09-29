/*
Author : ahaalphariyanshu
Problem: A
Contest: 1397
Platform: Codeforces
Time: 30-Aug-2020 21:17
Quote:"ofcourse but maybe"
Problem Statement:   

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int i, j, test, A, n, le, K, delta, sum, ele;
string str, sub, ans, bit;

void solve()
{
   n;
  ans  = "YES";
  cin >> n;
  le = 26;
  int alpha[le] = {0};

  i = 0;
  while (i < n)
  {
    string str;
    cin >> str;
    int len = str.length();

    j = 0;
    while (  j < len )
    {
      delta = (str[j] - 'a');
      alpha[delta]++;
      j++;
    }
    i++;
  }

  for (i = 0; i < le; i++)
  {
    if (alpha[i] % n != 0)
    {
      ans = "NO";
    }
    if (alpha[i] == 0)
    {
      continue;
    }
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