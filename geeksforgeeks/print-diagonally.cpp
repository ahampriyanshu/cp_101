#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, n, d;

void solve()
{
    cin >> n;
    int mat[n][n];

    //input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    // uppper half
    for (int i = 0; i < n; i++)
    {

        for (int j = 0, k = i; j <= i; j++, k--)
        {
            cout << mat[j][k] << " ";
        }
    }

    // lower half
        for (int i = 1; i < n; i++)
    {

        for (int j = i, k = n-1; j < n; j++, k--)
        {
            cout << mat[j][k] <<" ";
        }
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
        cout << endl;
    }
}