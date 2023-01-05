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
  cin >> n;

  string s1, s2;
  cin >> s1 >> s2;

  vector<int> ones(2, 0);

  for (char c : s1)
  {
    if (c == '1')
      ones[0]++;
  }
  for (char c : s2)
  {
    if (c == '1')
      ones[1]++;
  }

  if (ones[0] == ones[1])
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