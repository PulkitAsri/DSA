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

  vector<string> arr(n, "");
  map<string, int> mp;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (mp[arr[i]] == 0)
    {
      // string not present
      cout << arr[i] << endl;
      mp[arr[i]]++;
    }
    else
    {
      cout << arr[i] << '(' << mp[arr[i]] << ')' << endl;
      mp[arr[i]]++;
    }
  }

  cout << endl;
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