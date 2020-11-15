/*
Author : ahampriyanshu
Problem: A
Contest: 1436
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test,i, n,p,sum,ans;

ll max_sum = 10000;
bool prime[10001];

void solve()
{

    cin >> n;
    ll counter = 0;
    vector<ll> vec(n);


     for (i = 0; i<n - 1; i++)
    {
        vec[i] = 1;
    }


    sum = (n-1);
    

    for (p = 2; p <= 10001; p++)
    {
       if (prime[p] && prime[p]> sum) 
         vec.push_back(prime[p]);
          break;
    }

    for (i = 0; i<n ; i++)
    {
     cout << vec[i] << " ";
    }

}

int main()
{
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= 10; p++)
    {

        if (prime[p] == true)
        {

            for (ll i = p * p; i <= 100001; i += p)
                prime[i] = false;
        }
    }

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
        solve();
        cout << endl;
    }

    return 0;
}
