#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve()
{
  int n, k;
  cin >> n;

  vector<int> arr(n, 0);
  int z = 0, o = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] == 0)
      z++;
    else
      o++;
  }

  int score = min(z, o);

  if (o > z)
  {
    score += (o - z) / 3;
  }

  cout << score << endl;
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