#include <bits/stdc++.h>
#include <typeinfo>

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

  vector<int> arr(n, 0);
  map<int, pair<vector<int>, int>> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]].first.push_back(i);
    mp[arr[i]].second = 0;
  }
  // check if valid
  for (auto p : mp)
  {
    if ((p.second.first.size()) % p.first != 0)
    {
      cout << -1 << endl;
      return;
    }
  }

  vector<int> A(n, -1);
  int curr = 1;
  for (int i = 0; i < n; i++)
  {
    if (A[i] == -1)
    {
      // next i assign curr
      int ass = arr[i];
      int j = mp[arr[i]].second;

      while (ass--)
      {
        int x = mp[arr[i]].first[j];
        j++;
        A[x] = curr;
      }
      mp[arr[i]].second = j;
      curr++;
    }
  }

  for (int i = 0; i < n; i++)
    cout << A[i] << " ";
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