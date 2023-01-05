#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define pii pair<long long, long long>
#define ff first
#define ss second

using namespace std;

int gcd_(int a, int b)
{
    return (b) ? gcd_(b, a % b) : a;
}

void solve()
{
    int n;
    cin >> n;

    vector<pii> A(n);

    for (auto &it : A)
        cin >> it.ff >> it.ss;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        map<pii, int> mp;

        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            int num = A[i].ss - A[j].ss;
            int den = A[i].ff - A[j].ff;

            if (den == 0)
                num = den = INT64_MAX;
            else if (num == 0)
                num = den = 0;
            else
            {

                bool positive = (num > 0 and den > 0) or (num < 0 and den < 0);
                num = abs(num);
                den = abs(den);

                int g = gcd_(num, den);
                num /= g;
                den /= g;

                if (not positive)
                    num = -num;
            }

            mp[{num, den}]++;
        }

        int cur = 0;
        for (auto &it : mp)
        {

            if (it.ff.ff == 0)
            {
                if (mp.count({INT64_MAX, INT64_MAX}))
                    cur += it.ss * mp[{INT64_MAX, INT64_MAX}];
            }
            else if (it.ff.ff == INT64_MAX)
            {
                if (mp.count({0, 0}))
                    cur += it.ss * mp[{0, 0}];
            }
            else
            {
                int num = -it.ff.ss;
                int den = it.ff.ff;

                bool positive = (num > 0 and den > 0) or (num < 0 and den < 0);
                num = abs(num);
                den = abs(den);

                if (not positive)
                    num = -num;

                if (mp.count({num, den}))
                    cur += it.ss * mp[{num, den}];
            }
        }

        ans += (cur / 2);
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