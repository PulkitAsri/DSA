#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve(int i)
{
  int n, k;
  cin >> n >> k;
  bool ans = false;

  vector<int> A(n, 0);
  vector<int> B(n, 0);

  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> B[i];
  }

  if (k ==)

    cout << "Case #" << i << ": " << ans ? "YES" : "NO" << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    solve(i);
  }
  return 0;
}