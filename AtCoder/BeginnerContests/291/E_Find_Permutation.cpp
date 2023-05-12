#include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;

  vector<vector<int>> graph(n + 1);
  Graph g(6);

  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    g.addEdge(a, b);
    graph[a].push_back(b);
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