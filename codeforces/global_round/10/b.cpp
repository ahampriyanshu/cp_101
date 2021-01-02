/*
Author : ahampriyanshu
Problem: B
Contest: 1392
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, N, K, d;

void solve()
{
    cin >> N >> K;
    vector<ll> arr(N);
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    if (K & 1)
    {
    auto maximum = max_element(arr.begin(), arr.end());
    d = *maximum;
        for (i = 0; i < N; i++) 
        {    
        arr[i] = d - arr[i];
        }
    }
    else
    {
        for (int j = 0; j <= 1 ; j++) {
            
        auto maximum = max_element(arr.begin(), arr.end());
        d = *maximum;

 		for (i = 0; i < N; i++)
        { 
 			arr[i]  = d - arr[i];
 			
 		}
 		
 	}
    }
    
    for (int i = 0; i < N; i++)
    { 
    cout << arr[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
        solve();
        cout << "\n";
    }
}
