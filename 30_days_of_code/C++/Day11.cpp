#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, a[6][6], sum = 0, max = 0, size = 6;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < (size - 2); i++)
    {
        for (j = 0; j < (size - 2); j++)
        {
            sum = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
            if (sum > max)
                max = sum;
        }
    }
    cout << max;
    return 0;
}
