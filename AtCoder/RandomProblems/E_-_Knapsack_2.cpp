#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"
#define INF INT_MAX

using namespace std;

void solve()
{
  int N, W;
  cin >> N >> W;

  vector<int> value(N, 0);
  vector<int> weight(N, 0);
  int totalValue = 0;
  vector<vector<int>> dp(N + 1, vector<int>(totalValue + 1, -1));
  for (int i = 0; i < N; i++)
  {
    cin >> weight[i] >> value[i];
    totalValue += value[i];
  }

  // recurance

  for (int i = 0; i < N; i++)
  {
    for (int sumOfV = 0; sumOfV <= totalValue; sumOfV++)
    {
      if(i==0){
        dp[i][sumOfV]= min(0,notTake)
      }
      int notTake = dp[i - 1][sumOfV];
      int hehe = weight[i] + dp[i - 1][sumOfV - value[i]];
      int take = (hehe <= W) ? hehe : INF;

      dp[i][sumOfV]= min(take,notTake);
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