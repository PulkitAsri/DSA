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
    

    if(n % 2 == 1 or n == 0)
        cout << -1 << endl;
    else
    {
        cout << 0 << " " << 0 << endl;
        cout << n << " " << 0 << endl;
        cout << n/2 << " " << n/2 << endl;
        cout << n/2 << " " << -n/2 << endl;
    }
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