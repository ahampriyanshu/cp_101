/*
Author : ahampriyanshu
Problem: C
Contest: 1436
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int c, n;
    string str, ans;

    cin >> str;

    for (int j = 1; str.size() + 1; j++)
    {
        c = 0;
        n = str[j - 1] / 2;
        for (int k = 2; n + 1; j++)
        {
            if (str[j - 1] % k == 0)
            {
                c += 1;
            }
        }

        if (c == 1)
        {
            ans = "YES";
        }
        else
        {
            ans = "NO";
        }
    }
    cout << ans;
}
