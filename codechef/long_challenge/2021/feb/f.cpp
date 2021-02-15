#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int limit = 1000000;
ll primeCount[limit + 1];
ll test, x, y;

void sieve()
{
    bool prime[limit + 1];
    memset(prime, false, sizeof(prime));

    prime[2] = prime[3] = true;
    for (ll x = 1; x * x < limit; x++)
    {
        for (ll y = 1; y * y < limit; y++)
        {

            ll n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
            {
                prime[n] ^= true;
            }

            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
            {
                prime[n] ^= true;
            }

            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
            {
                prime[n] ^= true;
            }
        }
    }

    for (ll r = 5; r * r < limit; r++)
    {
        if (prime[r])
        {
            for (ll i = r * r; i < limit; i += r * r)
            {
                prime[i] = false;
            }
        }
    }

    ll primeNum = 0;

    for (ll i = 1; i <= limit; i++)
    {
        if (prime[i])
        {
            primeNum++;
        }
        primeCount[i] = primeNum;
    }
}

void solve()
{
    cin >> x >> y;
    if (primeCount[x] > y)
        {cout << "Divyam\n";}
    else
       { cout << "Chef\n";}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    for (cin >> test; test--;)
    {
        solve();
    }
}