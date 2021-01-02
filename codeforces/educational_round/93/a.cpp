#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test, size;

    cin >> test;
    while (test--)
    {
        cin >> size;
        vector<int> arr(size);
        int side1, side2, side3 = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        side1 = arr[0];
        side2 = arr[1];
        side3 = arr[size - 1];
        if (side1 + side2 > side3)
            cout << -1 << endl;
        else
            cout << 1 << " " << 2 << " " << size << endl;
    }
    return 0;
}
