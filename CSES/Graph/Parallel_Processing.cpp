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
    vector<int> A(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];
    int pre = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += A[i];
        
    int ans = INT64_MAX;
    for (int i = 0; i < n; i++)
    {
        pre += A[i];
        int cur = max(pre, sum - pre);
        ans = min(ans, cur);
    }

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}