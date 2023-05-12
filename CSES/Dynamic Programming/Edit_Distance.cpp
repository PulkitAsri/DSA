#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

// #define int long long
// #define endl "\n"

using namespace std;
int dp[5002][5002];
// int solve(int i, int j, string &s, string &t)
// {
//   if (i == -1 && j == -1)
//     return 0;
//   if (i < 0)
//     return j + 1;
//   if (j < 0)
//     return i + 1;
//   if (dp[i][j] != -1)
//     return dp[i][j];

//   if (s[i] == t[j])
//     return dp[i][j] = solve(i - 1, j - 1, s, t);
//   else
//   {
//     int add = solve(i, j - 1, s, t);
//     int sub = solve(i - 1, j, s, t);
//     int replace = solve(i - 1, j - 1, s, t);
//     return dp[i][j] = 1 + min(add, min(sub, replace));
//   }
// }

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  memset(dp, 0, sizeof dp);
  string s, t;
  cin >> s >> t;
  int n = s.length();
  int m = t.length();

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= m; j++)
    {
      if (i == 0 && j == 0)
        dp[i][j] = 0;
      else if (i == 0)
        dp[i][j] = j;
      else if (j == 0)
        dp[i][j] = i;
      else if (s[i - 1] == t[j - 1])
        dp[i][j] = dp[i - 1][j - 1];
      else
      {
        int add = dp[i][j - 1];
        int sub = dp[i - 1][j];
        int replace = dp[i - 1][j - 1];

        dp[i][j] = 1 + min(add, min(sub, replace));
      }
    }
  }
  cout << dp[n][m];
  // cout << solve(n - 1, m - 1, s, t);
  return 0;
}