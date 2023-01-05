#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;
int solve(int idx, int r, int b, vector<int> &Red, vector<int> &Blue)
{

  
}
void solve()
{
  int n, m;

  vector<int> Red(n, 0);
  vector<int> Blue(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> Red[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> Blue[i];
  }

  cout << solve(n - 1, Red, Blue) << endl;
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