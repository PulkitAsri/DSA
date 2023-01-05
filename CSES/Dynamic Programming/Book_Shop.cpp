#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"

using namespace std;
int dp[2][100002];

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // memset(dp, -1, sizeof dp);
  int n, W;
  cin >> n >> W;
  vector<int> weights(n);
  vector<int> values(n);

  for (int i = 0; i < n; i++)
    cin >> weights[i];
  for (int i = 0; i < n; i++)
    cin >> values[i];

  // cout << solve(n - 1, W, weights, values);

  for (int i = 0; i <= n; i++)
  {
    for (int w = 0; w <= W; w++)
    {
      if (i == 0)
      {
        dp[i & 1][w] = 0;
      }
      else if (weights[i - 1] <= w)
      {
        int take = values[i - 1] + dp[(i - 1) & 1][w - weights[i - 1]];
        int reject = dp[(i - 1) & 1][w];
        dp[i & 1][w] = max(take, reject);
      }
      else
      {
        dp[i & 1][w] = dp[(i - 1) & 1][w];
      }
    }
  }

  cout << dp[n & 1][W];

  return 0;
}