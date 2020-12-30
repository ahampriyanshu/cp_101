#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, ele, A, n, m, k, diff, sum, i,ans, len;

void solve()
{
   cin >> n;
   vector<ll> red(n);

for (i = 0; i < n ; i++)
    {
      cin>> red[i];
    }


cin >> m;
 vector<ll> blue(m);

for (i = 0; i < m ; i++)
    {
      cin>> blue[i];
    }

    for (i = 0; i < m ; i++)
    {
      red[i]+=red[i-1];
    }

    for (i = 0; i < n ; i++)
    {
     blue[i]+=blue[i-1];
    }


    ll resA =  *max_element(red.begin(),red.end());
    ll resB =  *max_element(blue.begin(),blue.end());

    if (resA<0)
    {resA=0;}
    if (resB<0){
        resB=0;}
    cout << resA+resB <<endl;
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