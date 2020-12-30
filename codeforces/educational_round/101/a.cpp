#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, A, n, K, diff, sum, len;

void solve()
{
   string str;
   ll open = 0, close = 0, ques = 0;
   cin >> str;
   ll n = str.length();

   if (int(str[0]) == 41 || str[n - 1] == '(' || n % 2 != 0)
   {
      cout << "NO" << endl;
   }
   else
   {
      for (int i = 1; i < n - 1; i++)
      {

         if (str[i] == '(')
         {
            open++;
         }
         else if (str[i] == '?')
         {
            ques++;
         }
         else
         {
            close++;
         }
      }

      ll diff = abs(open - close);

      if (diff <= ques)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
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
   }
}