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
  if (n <= 50)
    cout << "LEFT" << endl;
  else
    cout << "RIGHT" << endl;

  // vector<int> arr(n,0);
  // for(int i=0; i<n; i++){
  //   arr[i]=i;
  // }

  // cout<<endl;
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