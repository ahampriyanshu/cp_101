/*
Author : constusername
Problem: C
Contest: 1392
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, N;

ll solve()
{
   		cin >> N;

        ll ans[N];
		vector<ll> arr(N);

		for(i = 0; i < N; i++)
        {
			cin >> arr[i];
		}

		ans[0] = 0;
        i = 1;

		while(i<N)
        {
			ans[i] = ans[i-1];
			if(arr[i] < arr[i-1]) 
            {
			ans[i] = ans[i] + arr[i-1] -arr[i];
			}
            i++;
		}

		return ans[N-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
      cout << solve() << "\n";
    }
}
