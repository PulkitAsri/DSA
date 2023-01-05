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
  int n, m;
  cin >> n >> m;
  int ans = 0;

  vector<int> arr(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    ans += (max(abs(arr[i] - 1), abs(arr[i] - m)));
  }

  cout << ans << endl;
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