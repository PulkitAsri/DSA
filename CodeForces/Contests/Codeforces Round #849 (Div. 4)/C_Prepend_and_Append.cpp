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
  int n, k;
  string s;
  cin >> n >> s;
  int ans = n;

  // cout << n << endl
  //      << endl;

  for (int i = 0; i < n / 2; i++)
  {
    // cout << i << " ";
    if (s[i] != s[n - 1 - i])
    {
      ans -= 2;
    }
    else
    {
      cout << ans << endl;
      return;
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