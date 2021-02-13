/*
Author : ahampriyanshu
Problem: CHEFWED
Contest: AUG20B
Platform: CodeChef
Problem Statement:
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int times = 1;
ll test, i;

ll solve()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    
           map<ll, ll> mp;

           for (i = 0; i < n; i++)
        {
              cin >> a[i];
               
           }
           ll ne[n+1][n+1];
           
           ll ans =0,vc =0,l =1;
           for(i=0;i<n;i++){
               mp.clear();
              for(ll j= i;j<n;j++){
                   ne[i][j] = (j==0)?0:ne[i][j-1];
              if(mp.count(a[j]))
              {
                  auto itr = mp.find(a[j]);
                  if(itr->second == 1 ){
                      ne[i][j]++;
                  }
                  ne[i][j]++;
              }
             
                  if(mp.count(a[j]))
                  {
                    auto itr = mp.find(a[j]);
                    int h = itr->second;
                    itr->second = h+1;
                  }
                  else{
                      mp.insert({ a[j], 1 });
                  }
                  
              
              }
           }
           
           ans = INT_MAX;
           ll tbl =100;
           ll dp[101][1001];
          
           for(i=1;i<n+1;i++){
               dp[1][i] = ne[0][i-1];
           }
           for(i=2;i<=tbl;i++){
               dp[i][1] = 0;
           }
           
           for(i=2;i<=tbl;i++){
               for(ll j=2;j<=n;j++){
                   ll con = INT_MAX;
                   for(ll p=1;p<j;p++)
                   {
                    con = min(con, dp[i-1][p]+ne[p][j-1]);
                    }
                dp[i][j] = con;
               }
           }
           for(tbl=1;tbl<=100;tbl++){
               ans = min(tbl*k + dp[tbl][n], ans);
           }

           
           return ans;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
      cout << solve() << "\n";
    }
}