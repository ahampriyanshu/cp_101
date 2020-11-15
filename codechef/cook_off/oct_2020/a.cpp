/*
Author : ahampriyanshu
Problem:SPLITIT
Contest: COOK123B
Platform: Codechef
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test, n;
    string str;
    char sub;
    bool flag = false;

    for (cin >> test; test--;)
    {
        cin >> n >> str;
        sub = str[n-1];

        if (count(str.begin(), str.end(),sub) > 1)
        {
            cout << "YES";
        }
        else { cout << "NO"; }

        cout << endl;
    }
}