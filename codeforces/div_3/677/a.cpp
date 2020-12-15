/*
Author : ahampriyanshu
Problem: A
Contest: 1433
Platform: Codeforces
*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
ll i, j, test, n, x, t, k, y, ans, ele;
string num; 

#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    cin >> num;
    ans = 0;

    int front = num[0] - '0';
 
    ans += ( front - 1 ) * 10 ;

    int len = num.length();

    if ( len == 1)
    {
        ans += 1;
    }
    else  if ( len == 2)
    {
        ans += 3;
    }
    else  if ( len == 3)
    {
        ans += 6;
    }
    else  if ( len == 4)
    {
        ans += 10;
    }

    cout << ans;
    
    num.clear();
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> size;
 
    for (cin >> test; test--;)
    {
        cin >> vec[n];
    }
}