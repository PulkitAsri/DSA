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
  char ch;
  cin >> ch;
  map<char, int> mp;
  string s = "codeforces";
  for (char c : s)
    mp[c]++;

  if (mp.count(ch) == 0)
  {
    cout << "NO" << endl;
  }
  else
    cout << "YES" << endl;

  return;
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