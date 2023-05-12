#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"

using namespace std;

// int getAns(int i, string &s, map<char, int> &mp)
// {
//   int dis;

//   mp[s[i]]++;
// }
void solve()
{
  int n, k;
  string s;
  cin >> n >> s;

  map<char, int> mp1;
  map<char, int> mp2;
  for (char ch : s)
    mp2[ch]++;

  // int ans = getAns(0, s, mp);
  int ans = mp2.size();

  // int s1Size=0;
  int s2Size = mp2.size();

  for (int i = 0; i < n; i++)
  {
    mp1[s[i]]++;
    mp2[s[i]]--;
    if (mp2[s[i]] == 0)
      s2Size--;

    ans = max(ans, (int)mp1.size() + s2Size);
  }

  cout << ans << endl;
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