#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

void solve()
{
  int n, k;
  cin >> n;

  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());
  for (int i = 0; i <= n - 2; i++)
  {
    if (arr[i] < 0 && arr[i + 1] < 0)
    {
      arr[i] *= -1;
      arr[i + 1] *= -1;
      i++;
    }
    else if (arr[i] < 0 && arr[i + 1] >= 0 && abs(arr[i]) > abs(arr[i + 1]))
    {
      arr[i] *= -1;
      break;
    }
  }
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += arr[i];

  cout << sum << endl;
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