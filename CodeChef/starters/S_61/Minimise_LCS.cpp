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

  string s;
  string t;
  cin >> s >> t;

  vector<int> freqS(26, 0);
  vector<int> freqT(26, 0);
  for (char c : s)
  {
    freqS[c - 'a']++;
  }
  for (char c : t)
  {
    freqT[c - 'a']++;
  }

  int mx = 0;
  char mxc = '0';
  for (int i = 0; i < 26; i++)
  {
    freqS[i] = min(freqS[i], freqT[i]);
    if (freqS[i] > mx)
    {
      mx = freqS[i];
      mxc = (char)(i + 'a');
    }
  }
  cout << mx << endl;
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