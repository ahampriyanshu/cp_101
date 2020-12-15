/*
Author : ahampriyanshu
Problem: 0
Contest: 1430
Platform: Codeforces
Time: 11-Oct-2020 15:17
Quote:"I in ID stands of I and D stands for dentification"
Problem Statement:   
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int test, A, n, K, diff, sum, len;
string str, ans, bit;

void solve()
{
   cin >> n;
   bool flag = false;

   for (int i = 0; i <= n / 3 && !flag; i++)
   {
      for (int j = 0; j <= n / 5 && !flag; j++)
      {
         for (int k = 0; k <= n / 7 && !flag; k++)
         {
            if ((3 * i) + (5 * j) + (7 * k) == n)
            {
               cout << i << " " << j << " " << k << endl;
               flag = true;
            }
         }
      }
   }
   if (!flag)
   {
      cout << -1 << endl;
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