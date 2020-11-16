/*
Author : ahampriyanshu
Problem:FEMA2
Contest: NOV20B
Platform: Codechef
Time: 16-Nov-2020 10:20
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, i, magnet, iron, n, k, cells, p, min_mi, max_mi, r, ans, sum, ele, gcd, dish, last, sec;
string str;

void solve()
{
    magnet = 0, iron = 0, cells = 0, r = 0, ans = 0;
    cin >> n >> k >> str;
    p = k + 1;
    while ((magnet < n) && (iron < n))
    {
        if (str[magnet] == 'M')
        {
            if (str[iron] == 'I')
            {
                cells = 0;
                min_mi = min(magnet, iron);
                max_mi = max(magnet, iron);

                for (i = min_mi; i < max_mi; i++)
                {
                    if (str[i] == ':')
                        cells++;
                }

                r = p - abs(magnet - iron) - cells;

                if (r > 0)
                {
                    ans++;
                    magnet++;
                    iron++;
                }
                else
                {
                    if (magnet > iron)
                    {
                        iron++;
                    }
                    else
                    {
                        magnet++;
                    }
                }
            }
            else if (str[iron] == 'X')
            {
                magnet = iron;
                magnet++;
                iron++;
            }
            else
            {
                iron++;
            }
        }
        else if (str[magnet] == 'X')
        {
            iron = magnet;
            magnet++;
            iron++;
        }
        else
        {
            magnet++;
        }
    }
    cout << ans;
    str.clear();
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