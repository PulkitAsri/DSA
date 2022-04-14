#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

string solve(int n, int k, vector<int> &arr)
{
    if (n <= 0)
        return (k == 1) ? "" : "-1";

    // 0
    if (k <= arr[n - 1])
    {
        string smallAns = solve(n - 1, k, arr);
        if (smallAns.back() != '1')
            return "A" + smallAns;
        return smallAns;
    }
    // 1
    else
    {
        string smallAns = solve(n - 2, k - arr[n - 1], arr);
        if (smallAns.back() != '1')
        {
            if (n >= 2)
                return "BA" + smallAns;
            else
                return "B" + smallAns;
        }

        return smallAns;
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(100);
    arr[0] = 1;
    arr[1] = 2;

    for (int i = 2; i <= n; i++)
    {
        // 0
        arr[i] += arr[i - 1];

        // 1
        arr[i] += arr[i - 2];
    }

    cout << solve(n, k, arr) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}