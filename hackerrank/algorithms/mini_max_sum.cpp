/*
 Given five positive integers, find the minimum and maximum values that can be calculated
 by summing exactly four of the five integers. Then print the respective minimum and
 maximum values as a single line of two space-separated long integers.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    vector<ll> arr(5);

    for (ll i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << arr[0] + arr[1] + arr[2] + arr[3] <<" "<< arr[1] + arr[2] + arr[3] +arr[4] ;

    return 0;
}
