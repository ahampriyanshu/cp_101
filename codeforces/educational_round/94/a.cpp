/*
Author : ahampriyanshu
Problem: 0
Contest: 1400
Platform: Codeforces
Time: 25-Aug-2020 20:43
Quote:"I in ID stands of I and D stands for dentification"
Problem Statement:   
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, A, N, K, diff, sum, len;
string str,ans,bit;

void solve()
{
   cin >> N  >>str;

    ans.clear();
    i = 0;
 	while(i < N)
    {
 	bit =str.substr(i, N);
 	ans.push_back(bit[i]);
    i++;
 	}
 
 	cout << ans << endl;
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