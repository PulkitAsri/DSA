#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"

using namespace std;
int dp[1000002];
int mod = 1e9 + 7;
int solve(int n)
{
  if (n == 0)
    return 1;
  if (n < 0)
    return 0;
  if (dp[n] != -1)
    return dp[n];

  int ans = 0;
  for (int i = 1; i <= 6; i++)
  {
    ans += solve(n - i) % mod;
  }
  return dp[n] = ans % mod;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  memset(dp, -1, sizeof dp);
  cout << solve(n);

  return 0;
}