// #include <bits/stdc++.h>
// #include <algorithm>
#include <iostream>
#include <vector>
// #include <string>
// #include <math.h>

// #define int long long
#define endl "\n"

using namespace std;
int mod = 1e9 + 7;
// int dp[102][1000002];
// int solve(int i, int s, vector<int> &coins)
// {
//   if (s < 0)
//     return 0;
//   if (s == 0)
//     return 1;
//   if (i == 0)
//     return s % coins[i] == 0;

//   if (dp[i][s] != -1)
//     return dp[i][s];

//   int takeAndStay = solve(i, s - coins[i], coins);
//   int reject = solve(i - 1, s, coins);

//   return dp[i][s] = takeAndStay + reject;
// }

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  // memset(dp, 0, sizeof dp);
  int n, sum;
  cin >> n >> sum;

  vector<int> coins(n);
  for (int i = 0; i < n; i++)
  {
    cin >> coins[i];
  }

  vector<int> prev(sum + 1, 0), curr(sum + 1, 0);
  for (int i = 0; i < n; i++)
  {
    for (int s = 0; s <= sum; s++)
    {
      if (i == 0)
      {
        curr[s] = s % coins[i] == 0;
        continue;
      }
      else if (s == 0)
      {
        curr[s] = 1;
        continue;
      }

      int take = (s - coins[i] >= 0) ? curr[s - coins[i]] : 0;
      int reject = prev[s];
      curr[s] = (take + reject) % mod;
    }
    prev = curr;
  }

  // cout << solve(n - 1, sum, coins);
  cout << prev[sum];
  return 0;
}