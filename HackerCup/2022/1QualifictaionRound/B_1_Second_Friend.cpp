#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve(int testCase)
{
  int n, m;
  cin >> n >> m;
  bool isNotEmpty = false;
  vector<vector<char>> scene(n, vector<char>(m, '.'));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> scene[i][j];
      if (scene[i][j] == '^')
        isNotEmpty = true;
    }
  }
  if ((n == 1 || m == 1))
  {
    cout << "Case #" << testCase << ": "
         << (isNotEmpty
                 ? "Impossible"
                 : "Possible")
         << endl;

    if (!isNotEmpty)
    {
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
          cout << '.';
        }
        cout << endl;
      }
    }
    return;
  }
  cout << "Case #" << testCase << ": "
       << "Possible" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << '^';
    }
    cout << endl;
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  int T = t;
  while (T--)
  {
    solve(t - T);
  }
  return 0;
}