#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, A, i, j, n;
float area;

void solve()
{
   set<float, greater<float>> s1;
   cin >> n;
   vector<float> vec(n);
   for (i = 0; i < n; i++)
   {
      cin >> vec[i];
   }

   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         area = (vec[j] - vec[i]) / 2;

         if (area > 0)
         {
            s1.insert(area);
         }
      }
   }

   cout << s1.size() << endl;
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