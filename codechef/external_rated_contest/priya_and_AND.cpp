/*
Author : ahampriyanshu
Problem: CENS2020
Contest: CENS20D
Platform: codechef
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int test, n;

int solve(vector<int> ar, int N)
{
    int count = 0;

    for (int i = 0; i < N - 1; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if ( (ar[i] & ar[j]) == ar[i])
            {
                ++count;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << solve(arr, n) << "\n";
    }
}
