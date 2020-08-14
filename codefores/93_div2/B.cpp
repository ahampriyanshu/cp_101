#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    for (cin >> test; test--;)
    {
       vector<int> arr;
       // dynamic vector arr
        string ar;
        // string ar
        cin >> ar;
        int count = 0;
        for (int i = 0; i <= ar.size(); i++)
        {
            if (i == ar.size())
            {
                if (count)
                arr.emplace_back(count);
                count = 0;
                sort(arr.begin(),arr.end());
                for (int i =arr.size() - 1; i >= 0; i -= 2)
                {
                    count +=arr[i];
                }
                cout << count << '\n';
                break;
            }
            else
            {
                if (ar[i] == '1')
                {
                    count++;
                }
                else
                {
                    if (count)
                    {
                       arr.emplace_back(count);
                    }
                    count = 0;
                }
            }
        }
    }
}
