#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll test,tt;

void solve()
{ 
    ll i,n,max;
    cin >> n >> max;
    ll vec[n];
    vector<ll> answer;
    for(i=0; i<n; i++)
    {
        cin >> vec[i];
    }

  while (answer.size() != n) {
    for (i = 0; i < n; i++) {
      if (vec[i] > 0) {
        vec[i] -= max;
        if (vec[i] <= 0) {
          answer.push_back(i+1);
        }
      }
    }
  }

  for(i=0; i<n; i++)
    {
        cout << answer[i] << " ";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test,tt=1; test--;)
    {
       cout << "Case #"<<tt<<": ";
        solve();
        cout<<endl;
        tt++;
    }
}