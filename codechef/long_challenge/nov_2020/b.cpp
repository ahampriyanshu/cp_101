/*
Author : ahampriyanshu
Problem: RESTORE
Contest: NOV20B
Platform: Codechef
Time: 15-Nov-2020 22:29
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, i, n, ans, sum, ele, gcd, dish, last, sec;
ll mx = 4000000;
vector<ll> prime;

void solve()
{
        cin >> n;
        map<ll, ll> mp;
        vector<ll> vec(n);
        vector<ll> res;


        for (i = 0; i < n; i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;
        }


 
        for (i = 0; i < n; i++)
        {
            res.push_back(prime[vec[i]]);
            mp[vec[i]]--;
        }


        
        for (i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool arr[mx + 1];
    memset(arr, true, sizeof(arr));
    

    for (int p = 2; p * p <= mx; p++)
    {
        if (arr[p] == true)
        {

            for (int i = p * p; i <= mx; i += p)
                arr[i] = false;
        }
    }


    for (int p = 2; p <= mx; p++)
    {
        if (arr[p])
        {
        prime.push_back(p);
        }
    }

    for (cin >> test; test--;)
    {
        solve();
        cout << endl;
    }

    return 0;
}