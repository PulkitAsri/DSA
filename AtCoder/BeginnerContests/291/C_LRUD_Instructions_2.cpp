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
  int x = 0;
  int y = 0;

  map<pair<int, int>, int> mp;
  mp[{0, 0}]++;
  for (char c : s)
  {
    switch (c)
    {
    case 'U':
      y++;
      break;
    case 'D':
      y--;
      break;

    case 'R':
      x++;
      break;

    case 'L':
      x--;
      break;
    }

    // cout << x << " " << y << endl;

    if (mp[{x, y}] > 0)
    {
      cout << "Yes" << endl;
      return;
    }
    else
      mp[{x, y}]++;
  }

  cout << "No" << endl;
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