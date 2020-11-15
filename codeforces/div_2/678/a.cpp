/*
Author : ahampriyanshu
Problem: A
Contest: 1436
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test;

void solve()
{
    double n,m,sum,i,ele;
    cin >> n >> m;
    sum = 0;
    ele = 0;

    for (i = 0; i<n; i++)
    {
        cin >> ele;
        sum += ele;
    }

    if (sum == m)
    {
        cout << "YES";
    }
    else
    {
        cout <<"NO";
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
