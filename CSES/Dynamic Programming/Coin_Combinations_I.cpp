// #include <bits/stdc++.h>
// #include <algorithm>
#include <iostream>
#include <vector>
// #include <string>
// #include <math.h>

// #define int long long
// #define endl "\n"

using namespace std;
// int dp[1000002];

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  // memset(dp, 0, sizeof dp);
  int mod = 1e9 + 7;

  int n, s;
  cin >> n >> s;

  vector<int> coins(n);
  for (int i = 0; i < n; i++)
  {
    cin >> coins[i];
  }

  vector<int> dp(s + 1);
  dp[0] = 1;

  for (int sum = 0; sum <= s; sum++)
  {
    for (int i = 0; i < n; i++)
    {

      if (sum - coins[i] >= 0)
      {
        dp[sum] += dp[sum - coins[i]];
        dp[sum] %= mod;
      }
    }
  }

  cout << dp[s];

  return 0;
}