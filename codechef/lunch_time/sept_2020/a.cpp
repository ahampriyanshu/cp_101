/*
Author : ahampriymax_elehu
Problem: WATMELON
Contest: LTIME88B
Platform: Codechef
Time: 26-Sept-2020 21:38
Quote:"Dogs are always in push up position"
Problem Statement:   
Let's call a sequence good if the sum of all its elements is 0.

You have a sequence of integers A1,A2,…,AN. You may perform any number of operations on this sequence (including zero). In one operation, you should choose a valid index i and decrease Ai by i. Can you make the sequence good using these operations?
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, n;

void solve()
{
    cin >> n;
    ll arr[n],ele,sum = 0;

    for (i = 0; i < n; i++)
    {
        cin >> ele;
        sum += ele;
    }

    if (sum >= 0 )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
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
        cout<<endl;
    }
}