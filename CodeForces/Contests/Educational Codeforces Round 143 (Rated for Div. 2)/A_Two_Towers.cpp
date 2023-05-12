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
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;

  reverse(t.begin(), t.end());
  s += t;
  int count = 0;
  for (int i = 0; i < n + m - 1; i++)
  {
    if (s[i] == s[i + 1])
      count++;
  }

  if (count <= 1)
    cout << "YES";
  else
    cout << "NO";

  cout << endl;
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