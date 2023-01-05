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
  int l1, l2, r1, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  // vector<int> arr(n,0);
  // for(int i=0; i<n; i++){
  //   arr[i]=i;
  // }

  int ans = min(r1, r2) - max(l1, l2);
  // cout << ans << endl;
  if (ans < 0)
    ans = 0;

  cout << ans << endl;
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