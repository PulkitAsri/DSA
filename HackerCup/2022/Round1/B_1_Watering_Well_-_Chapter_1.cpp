#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int unsigned long long
#define endl "\n"

using namespace std;

void solve(int t)
{
  int n, q;
  int mod = 1000000007;
  cin >> n;
  int ans = 0;
  vector<pair<int, int>> treeCood(n, {0, 0});

  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    treeCood[i].first = x;
    treeCood[i].second = y;
  }

  cin >> q;
  vector<pair<int, int>> wellCood(q, {0, 0});
  for (int i = 0; i < q; i++)
  {
    int x, y;
    cin >> x >> y;
    wellCood[i].first = x;
    wellCood[i].second = y;
  }

  int sumTreesX2 = 0;
  int sumTreesY2 = 0;

  int sumTreesX = 0;
  int sumTreesY = 0;
  for (auto &p : treeCood)
  {
    sumTreesX += p.first;
    sumTreesY += p.second;

    sumTreesX2 += p.first * p.first;
    sumTreesX2 += p.second * p.second;
  }

  int sumWellsX2 = 0;
  int sumWellsY2 = 0;

  int sumWellsX = 0;
  int sumWellsY = 0;
  for (auto &p : wellCood)
  {
    sumWellsX += p.first;
    sumWellsY += p.second;

    sumWellsX2 += p.first * p.first;
    sumWellsX2 += p.second * p.second;
  }

  // X cood
  ans += q * sumTreesX2;
  ans %= mod;
  ans += n * sumWellsX2;
  ans %= mod;
  ans -= 2 * (sumTreesX)*sumWellsX;
  ans %= mod;

  // Y cood
  ans += q * sumTreesY2;
  ans %= mod;
  ans += n * sumWellsY2;
  ans %= mod;
  ans -= 2 * (sumTreesY)*sumWellsY;
  ans %= mod;

  cout << "Case #" << t << ": " << ans << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    solve(i);
  }
  return 0;
}