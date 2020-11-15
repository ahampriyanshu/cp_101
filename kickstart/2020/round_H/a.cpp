#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve()
{
ll i,n,k,s,ans,t1,t2;
cin >> n >> k >> s;
    
t1 = k + n;
t2 = (2*k) - (2*s) + (n);
ans = min(t1,t2);
return ans;

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t,tt,sol; 
    cin >> t;
    tt = 1;
    while(t--)
    {

    sol = solve();

    printf("Case #%lld: %lld\n", tt, sol);
    tt++;
    }
}
