#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

ll num;
cin >> num;

for(ll i=10; i>=1; i--){
    if (num%i == 0)
    {
        cout << i;
        break;
    }
}

return 0;
}