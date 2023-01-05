#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve()
{
  int n;
  string s;
  cin >> n >> s;

  int gap = 0;
  bool flag = false;
  int ans = 2;
  for (char c : s)
  {
    gap++;
    if (c == '1')
    {
      if (!flag)
      {
        flag = true;
        gap = 0;
        continue;
      }
      // cout << gap << " ";
      int potAns = (gap != 0 && gap % 2 == 0) ? 2 : 1;
      ans = min(ans, potAns);

      gap = 0;
    }
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