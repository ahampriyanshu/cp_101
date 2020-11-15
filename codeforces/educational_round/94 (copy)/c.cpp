/*
Author : ahampriyanshu
Problem: B
Contest: 1430
Platform: Codeforces
Time: 11-Oct-2020 16:17
Quote:"I in ID stands of I and D stands for dentification"
Problem Statement:   
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, a,b,c,ele, A, n, k, diff, sum, i,ans, len;

void solve()
{
    cin >> n;
    a = n/2;
        b= n;

    for (i = 0; i < n -1; i++)
    {
        c = round((a+b)/2);
        cout << a<<" " << b <<endl;
        a =( n-i )/ 2 ;
        b = c;
    }

    cout << c;

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
        solve();
    }
}