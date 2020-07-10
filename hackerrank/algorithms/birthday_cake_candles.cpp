/*
 You are in charge of the cake for your nieces birthday and have decided the cake
 will have one candle for each year of her total age. When she blows out the candles,
 she’ll only be able to blow out the tallest ones. Your task is to find out how many
 candles she can successfully blow out.


Return the number of candles that can be blown out on a new line.

Sample Input 0

4
3 2 1 3

Sample Output 0

2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, max_year = 1, count = 0;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];

        if ( arr[i] > max_year ){
            max_year = arr[i];
            count = 0;
        }

        if ( arr[i] == max_year){
            count++;}
    }

    cout << count;

    return 0;
}
