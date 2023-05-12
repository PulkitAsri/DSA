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

  vector<int> tea(n, 0);
  vector<int> taster(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> tea[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> taster[i];
  }

  vector<int> ans(n, 0);
  for (int i = 0; i < n; i++)
  {
    int a = tea[i];
    // int prev=0;
    for (int j = i; j < n; j++)
    {
      // cout << i << "=> " << a << " left" << endl;
      if (a)
      {
        int x = min(a, taster[j]);
        // cout << j << " drinking " << x << endl;
        a -= x;
        ans[j] += x;
      }
      else
        break;
    }
  }

  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";
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

  // for (int i = 0; i < 1e5; i++)
  // {
  //   cout << 10000 << " ";
  // }
  // cout << endl;
  // for (int i = 0; i < 1e5; i++)
  // {
  //   cout << 1 << " ";
  // }
  // cout << endl;

  return 0;
}