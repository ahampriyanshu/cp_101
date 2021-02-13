#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll isEven(ll n)
{
    return (!(n & 1));
}


bool boring(string s)
{
    ll len = s.length();

    if (len == 1 && isEven(stoi(s)))
        return false;
    else if (len == 1)
        return true;

    for (ll i = 0; i < len; i += 2)
    {
        if (isEven(stoi(s.substr(i, 1))) == true)
        {
            return false;
        }
    }

    for (ll i = 1; i < len; i += 2)
    {
        if (!(isEven(stoi(s.substr(i, 1)))))
        {
        return false;
        }
    }
    return true;
}

ll solve()
{
    ll l, r,num,bet,si;
        cin >> l >> r;
        
        ll ans = 0;

        bet = r - l;    
        ans = ( bet%2==0 )  ? bet/2 : (bet+1)/2;





            if (boring(to_string(l)))
            {
                ans++;
            }

return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test,sol;
    cin >> test;

    for (ll t = 0; t < test; ++t)
    {
        
        sol = solve();
        cout << "Case #" << (t + 1) << ": " << sol << endl;
    }

    return 0;
}
