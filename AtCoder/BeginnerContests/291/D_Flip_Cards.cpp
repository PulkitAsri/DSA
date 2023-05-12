#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"
#define mod 998244353;
using namespace std;

// int solve(vector<pair<int, int>> &arr, int i)
// {
// }

void solve()
{
  int n;
  cin >> n;

  vector<pair<int, int>> arr(n);

  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    arr[i] = {a, b};
    // A[i] = a;
    // B[i] = b;
  }

  vector<vector<int>> dp(n + 1, vector<int>(2, 1));
  // dp[0][0]=1;
  pair<int, int> prev = arr[0];
  for (int i = 1; i < n; i++)
  {
    // cout << arr[i].first << " " << arr[i].second << " " << prev.first << " " << prev.second << " " << endl;
    for (int j = 0; j < 2; j++)
    {
      // use i-1
      int faceCard = -1;
      if (j == 0)
      {
        faceCard = prev.first;
      }
      else
        faceCard = prev.second;
      // cout << (faceCard != arr[i].second) << endl;
      dp[i][j] = dp[i - 1][j] * ((faceCard != arr[i].first) + (faceCard != arr[i].second));

      cout << dp[i][j] << " ";
      dp[i][j] %= mod;
    }
    cout << endl;
    prev = arr[i];
  }

  cout << dp[n - 1][0] + dp[n - 1][1] << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}