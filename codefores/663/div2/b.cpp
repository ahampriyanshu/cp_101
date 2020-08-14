#include <iostream>
#include <vector>
using namespace std;
int solve(vector<vector<char> > arr)
{
  int n = arr.size(), m = arr[0].size();
  int changes = 0;
  for(int i = 0; i < m - 1; i++)
  {
    changes += (arr[n - 1][i] != 'R');
  }
  for(int i = 0; i < n - 1; i++)
  {
    changes += (arr[i][m - 1] != 'D');
  }
  return changes;
}
int main()
{
  int t = 0;
  cin >> t;
  while(t--)
  {
    int n = 0, m = 0;
    cin >> n >> m;
    vector<vector<char> > grid(n);
    for(int i = 0; i < n; i++)
    {
      vector<char> loc(m);
      for(int j = 0; j < m; j++)
      {
        cin >> loc[j];
      }
      grid[i] = loc;
    }
    int solution = solve(grid);
    cout << solution << "\n";
  }
}
