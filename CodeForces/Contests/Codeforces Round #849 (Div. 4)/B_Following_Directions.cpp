#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"

using namespace std;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
void solve()
{
  int n, k;
  string s;
  cin >> n >> s;
  int x = 0, y = 0;

  for (char ch : s)
  {
    switch (ch)
    {
    case 'L':
      x += dx[0];
      y += dy[0];
      break;
    case 'R':
      x += dx[1];
      y += dy[1];
      break;
    case 'U':
      x += dx[2];
      y += dy[2];
      break;
    case 'D':
      x += dx[3];
      y += dy[3];
      break;
    }
    // cout << x << " " << y << endl;
    if (x == 1 && y == 1)
    {
      cout << "YES" << endl;
      return;
    }
  }

  cout << "NO" << endl;
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