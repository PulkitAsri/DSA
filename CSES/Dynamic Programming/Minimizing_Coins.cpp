#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"

using namespace std;
int inf = INT_MAX;
int solve(int idx, int sum, vector<int> &coins)
{
  if (sum < 0)
    return inf;
  if (idx < 0)
    return sum == 0;

  int takeAndStay = solve(idx, sum - coins[idx], coins);
  int takeAnsMove = solve(idx - 1, sum - coins[idx], coins);
  return min(takeAndStay, takeAnsMove);
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, s;
  cin >> n >> s;

  vector<int> coins(n);
  for (int i = 0; i < n; i++)
  {
    cin >> coins[i];
  }

  cout << solve(n - 1, s, coins);

  return 0;
}