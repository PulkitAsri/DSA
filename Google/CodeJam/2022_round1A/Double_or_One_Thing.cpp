#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve(int t)
{
    int n, k;
    string s;
    cin >> s;
    n = s.length();
    string ans = "";

    vector<int> freq(n + 1, 1);

    int sameFreq = 1;
    int repeatedCount = 0;
    for (int i = 1; i < n; i++)
    {
        char c = s[i];
        char prev = s[i - 1];

        if (prev < c)
        {
            if (repeatedCount == 0)
                freq[i - 1] += sameFreq;
            else
                freq[i - 1] = sameFreq;

            sameFreq = 1;
            repeatedCount = 0;
        }
        else if (prev == c)
        {
            repeatedCount++;
            sameFreq = 2 * (repeatedCount + 1);
            freq[i - 1] = 0;
        }
        else
        {
            if (repeatedCount != 0)
            {
                freq[i - 1] = repeatedCount + 1;
            }

            repeatedCount = 0;
            sameFreq = 1;
        }
        // cout<<sameFreq<<" ";
    }
    if (sameFreq != 1)
        freq[n - 1] = repeatedCount + 1;
    for (int i = 0; i < n; i++)
    {
        // cout<<freq[i]<<endl;
        for (int j = 0; j < freq[i]; j++)
        {
            ans += s[i];
        }
    }

    cout << "Case #" << t << ": ";
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int T = t;
    while (t--)
    {
        solve(T - t);
    }
    return 0;
}