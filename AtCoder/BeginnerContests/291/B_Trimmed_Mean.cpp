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
  cin >> n;

  vector<int> arr(5 * n, 0);
  int sum = 0;
  for (int i = 0; i < 5 * n; i++)
  {
    int x;
    cin >> x;
    arr[i] = x;
  }
  sort(arr.begin(), arr.end());
  for (int i = 0; i < 5 * n; i++)
  {
    if (i >= n && i < 4 * n)
    {
      sum += arr[i];
    }
  }

  cout << fixed << setprecision(15) << (double)sum / (3 * n) << endl;
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