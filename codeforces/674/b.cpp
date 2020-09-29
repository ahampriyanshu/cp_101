/*
Author : ahampriyanshu
Problem: B
Contest: 1426
Platform: Codeforces
*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
ll i, j, test, n, m, x,a,b,c,d, t, k, y, ans, ele;
 
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    cin >> n >> m;
    bool flag = false;
 
    for(i=0; i<n; i++)
    {
    cin >> a >> b >> c >>d;
    if (b == c)
    {
        flag = true;
    }
    }
 
    if(m%2 == 0 && m != 1){
    
    if(flag){
   cout<<"YES";
    }
    else
    {
        cout <<"NO";
    }
    }
    else
    {
        cout<<"NO";
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
