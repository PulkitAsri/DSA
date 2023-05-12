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
  string s;
  cin >> s;
  int i = 1;
  for (char c : s)
  {
    if (c <= 'Z' && c >= 'A')
    {
      break;
    }
    i++;
  }

  cout << i << endl;
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