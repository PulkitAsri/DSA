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
  int n;
  cin >> n;

  vector<vector<char>> arr(n, vector<char>(n, '-'));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      char c;
      cin >> c;
      arr[i][j] = c;
    }
  }

  // bool ans = true;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if ((arr[i][j] == 'W' && arr[j][i] != 'L') || (arr[i][j] == 'L' && arr[j][i] != 'W') || (arr[i][j] == 'D' && arr[j][i] != 'D'))
      {
        // ans = false;
        cout << "incorrect" << endl;
        return;
      }
    }
  }

  cout << "correct" << endl;
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