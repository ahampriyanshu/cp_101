
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Return lcm
ll findlcm(ll a, ll b){ return (a * b) / gcd(a , b); }

// Returns ans
ll findans(ll arr[], ll n)
{   vector<ll> lcm;
    ll ans=0;
    // Storing LCMs
    for (ll i = 0; i<n; i++)
    {
        lcm.push_back(findlcm(arr[i] , ans));
        ans = __gcd(ans , arr[i]);
    }

    // Now finally returning the answer
    ans = 0;
    for (ll i = 0; i<lcm.size() ; i++)
    {
        ans = __gcd(ans , lcm[i]);
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
