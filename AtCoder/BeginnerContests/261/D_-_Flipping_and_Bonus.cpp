#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int recurr(vector<int> &tossProfit, map<int, int> &bonuses, int profit, int idx, int counter, int &ans)
{

  if (idx == tossProfit.size())
  {
    return 0;
  }

  // if head
  int head = recurr(tossProfit, bonuses, profit + tossProfit[idx] + bonuses[counter + 1], idx + 1, counter + 1, ans);

  // if tail
  int tail = recurr(tossProfit, bonuses, profit + bonuses[0], idx + 1, 0, ans);
}

void solve()
{
  int n, m;
  cin >> n >> m;

  vector<int> tossProfit(n, 0);
  map<int, int> bonuses;
  for (int i = 0; i < n; i++)
  {
    cin >> tossProfit[i];
  }

  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    bonuses[x] = y;
  }
  int ans = 0;
  recurr(tossProfit, bonuses, 0, 0, 0, ans);
  cout << ans << endl;
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