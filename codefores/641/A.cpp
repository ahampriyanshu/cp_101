#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

// Returns GCD
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Returns ans
ll findans(ll arr[], ll n)
{   vector<ll> lcm;
    ll ans , temp;

    // Calculating and storing LCMs
    for (int i = 0; i < n; i++)
    {
    for (int j = i+1; j < n; j++)
    {
        ans = (((arr[i] * arr[j])) / (gcd(arr[i], arr[j])));
        lcm.push_back(ans);
    }
    }

    // Now finally returning the answer
    ans = lcm[0];
    for (int i = 0; i < n; i++)
    {
        temp = (gcd(lcm[i], lcm[i+1]));
        if (temp < ans)
        {
            ans = temp;
        }
    }
   return ans;
}

int main()
{
    ll size;
    scanf("%lld",&size);
    ll arr[size];
    for (ll i=0; i<size ; i++)
    {
        scanf("%lld",&arr[i]);
    }
    printf("%lld", findans(arr, size));
    return 0;
}
