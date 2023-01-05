#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;
int dp[100005];
int solve(int n, vector<int> &arr, int &k)
{
  if (n == 0)
    return 0;
  if (dp[n] != -1)
    return dp[n];

  int mn = INT_MAX;
  for (int i = 1; i <= k; i++)
  {
    if (n >= i)
    {
      int eachStep = solve(n - i, arr, k) + abs(arr[n] - arr[n - i]);
      mn = min(mn, eachStep);
    }
  }
  return dp[n] = mn;
}
void solve()
{
  int n, k;
  cin >> n >> k;
  memset(dp, -1, sizeof dp);
  vector<int> arr(n, 0);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // cout << solve(n - 1, arr, k) << endl; // recursive

  dp[0] = 0;

  for (int i = 1; i < n; i++)
  {
    int mn = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
      if (i >= j)
      {
        int eachStep = dp[i - j] + abs(arr[i] - arr[i - j]);
        mn = min(mn, eachStep);
      }
    }
    dp[i] = mn;
  }

  cout << dp[n - 1] << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin>>t;
  while (t--)
  {
    solve();
  }
  return 0;
}