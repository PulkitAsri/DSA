#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int unsigned long long
#define endl "\n"

using namespace std;

int solve(int k, int t, bool isEven, string &s)
{

    if (t == 0)
        return s[k] - 'A';

    int b = k / 2;

    // cout<<b<<endl;
    // int c=(k%2==0)? b: b+1;
    int x = solve(b, t - 1, (b + 1) % 2 == 0, s);

    // int m = s[k] -'A';
    if (isEven)
    {
        return (x + 2) % 3;
    }
    else
    {
        return (x + 1) % 3;
    }
}
void solve()
{
    string s;
    int q;
    cin >> s >> q;

    while (q--)
    {
        int t, k;
        cin >> t >> k;

        // solve
        int ans = solve(k - 1, t, (k) % 2 == 0, s);
        cout << (char)(ans + 'A') << endl;
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

// A B C
// B C C A A B
// C A A B A B B C B C C A

int MOD(int a, int b)
{
    int ans = a % b;

    if (ans < 0)
        ans += b;

    return ans;
}

// _ _ _ _ _ _ _
// 0 0
// 0 1
// 1 0
// 1 1