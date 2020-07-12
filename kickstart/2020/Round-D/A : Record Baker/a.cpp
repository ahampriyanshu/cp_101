#include <bits/stdc++.h>
using namespace std;

typedef  long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,tt; 
    scanf("%d", &t);

    while(t--)
    {

    ll i,n,mx,count;
    cin >> n ;
    vector<ll> a(n);

    for(i=0; i<n;  ++i)
    {
    scanf("%lld", &a[i]);
    }

    mx = -1;
    count = 0;

    for(i=0; i<n;  ++i)
    {
    if ( a[i]> mx && ( i == n-1 || a[i]> a[i+1]))
        {  count++; }
        mx = max(mx, a[i]);
    }  

    printf("Case #%d: %lld\n", tt, count);
    ++tt;

    }
}
