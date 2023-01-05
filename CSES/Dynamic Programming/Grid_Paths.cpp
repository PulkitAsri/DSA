#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

// #define int long long
// #define endl "\n"

int dp[1002][1002];
int mod = 1e9 + 7;
using namespace std;
bool isSafe(int i, int j, int n, vector<vector<char>> &grid)
{
  return i >= 0 && j >= 0 && i < n && j < n && grid[i][j] != '*';
}
int solve(int i, int j, int n, vector<vector<char>> &grid)
{
  if (i == 0 && j == 0)
    return 1;

  if (dp[i][j] != -1)
    return dp[i][j];

  int right = isSafe(i, j - 1, n, grid) ? solve(i, j - 1, n, grid) : 0;
  int down = isSafe(i - 1, j, n, grid) ? solve(i - 1, j, n, grid) : 0;

  return dp[i][j] = (right + down) % mod;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  memset(dp, -1, sizeof dp);
  int n;
  cin >> n;
  vector<vector<char>> grid(n, vector<char>(n));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> grid[i][j];
    }
  }

  if (grid[0][0] == '*' or grid[n - 1][n - 1] == '*')
  {
    cout << 0;
  }
  else
    cout << solve(n - 1, n - 1, n, grid);

  return 0;
}