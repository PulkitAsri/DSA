#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve(int testCase)
{
  int n, k;
  cin >> n >> k;

  bool ans = true;
  vector<int> arr(n, 0);
  vector<int> freq(101, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    freq[arr[i]]++;
    if (freq[arr[i]] > 2)
    {
      ans = false;
    }
  }
  // for (int i = 0; i < 101; i++)
  // {
  //   cout << i << "->" << freq[i] << endl;
  // }
  if (ans == false)
  {
    cout << "Case #" << testCase << ": " << (ans ? "YES" : "NO") << endl;
    return;
  }
  // so now only 0 or 1 or 2 freq is left
  int ones = 0;
  int twos = 0;
  for (int i = 0; i < 101; i++)
  {
    if (freq[i] == 1)
      ones++;
    if (freq[i] == 2)
      twos++;
  }
  if (ceil(ones / 2.0) + ceil(twos / 2.0) <= k)
  {
    ans = true;
  }
  else
  {
    ans = false;
  }

  cout << "Case #" << testCase << ": " << (ans ? "YES" : "NO") << endl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  int T = t;
  while (T--)
  {
    solve(t - T);
  }
  return 0;
}