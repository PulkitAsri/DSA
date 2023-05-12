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
  cin >> n >> k;

  vector<int> freq(51, 0);
  int maxOtherThanK = INT_MIN;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;

    if (k >= x && k <= y)
    {
      flag = true;
      for (int i = x; i <= y; i++)
      {
        freq[i]++;
        if (i != k)
          maxOtherThanK = max(maxOtherThanK, freq[i]);
      }
    }
  }

  if (freq[k] > maxOtherThanK && flag)
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