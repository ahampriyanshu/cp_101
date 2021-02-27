#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test, n,i,j;
string str,pal,org;

void solve()
{
    cin >> str;
    n = str.size();
    for (i = 0;i <= n; i++)
    {
    for (j = n;j > i; j--)
    {
        pal = str.substr(i,j);
        org = pal;
        cout << pal << endl;
        reverse(pal.begin(), pal.end()); 
        if(pal == org)
        {
            {   
                
            }
        }
    }
    }
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
