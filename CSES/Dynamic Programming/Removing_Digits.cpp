#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

// #define int long long
#define endl "\n"

using namespace std;

int solve(int n, vector<int> &dp)
{

  if (n == 0)
    return 0;
  if (n < 0)
    return INT_MAX;
  if (dp[n] != -1)
    return dp[n];

  vector<int> digits;
  int i = n;
  while (i > 0)
  {
    digits.push_back(i % 10);
    i /= 10;
  }
  int mnSteps = INT_MAX;
  for (int digit : digits)
  {
    int steps = (digit != 0) ? 1 + solve(n - digit, dp) : INT_MAX;
    mnSteps = min(mnSteps, steps);
  }
  return dp[n] = mnSteps;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;

  vector<int> dp(n + 1, -1);
  cout << solve(n, dp);

  return 0;
}