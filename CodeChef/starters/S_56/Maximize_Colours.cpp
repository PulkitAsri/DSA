#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve()
{
  int n, m, l;
  cin >> l >> m >> n;
  int ans = 0;
  ans += (l >= 1) + (m >= 1) + (n >= 1);
  l--;
  n--;
  m--;

  int noOfNonZeroDrops = (l >= 1) + (m >= 1) + (n >= 1);

  if ((l >= 2) && (m >= 2) && (n >= 2))
    cout << 6 << endl;
  else if (noOfNonZeroDrops < 2)
    cout << ans << endl;
  else
  {
    // 2,3

    // 3 1 1

    priority_queue<pair<int, int>> pq;
    pq.push({l, 0});
    pq.push({m, 1});
    pq.push({n, 2});

    auto max = pq.top();
    pq.pop();
    auto secondMax = pq.top();
    pq.pop();
    ans++;
    max.first -= 1;
    secondMax.first -= 1;

    auto thirdMax = pq.top();
    if (max.first >= 1 and thirdMax.first >= 1)
    {
      ans++;
      max.first -= 1;
      thirdMax.first -= 1;
    }
    if (secondMax.first >= 1 and thirdMax.first >= 1)
    {
      ans++;
      secondMax.first -= 1;
      thirdMax.first -= 1;
    }
    cout << ans << endl;
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}