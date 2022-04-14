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

    string s;
    cin >> s;

    vector<int> B = A;

    sort(B.begin(), B.end());

    int nPre = 0;
    int sPre = 0;
    int nSuf = 0;
    int sSuf = 0;

    int i = 0;
    int j = n - 1;

    while (i < n and B[i] == A[i])
    {
        nPre += s[i] == 'N';
        sPre += s[i] == 'S';
        i++;
    }

    while (j > i and B[j] == A[j])
    {
        nSuf += s[j] == 'N';
        sSuf += s[j] == 'S';
        j--;
    }

    if (i < j)
    {

        nPre += s[i] == 'N';
        sPre += s[i] == 'S';
        nSuf += s[j] == 'N';
        sSuf += s[j] == 'S';
    }

    // cout << i << " " << j << endl;

    if (i >= j)
    {
        cout << 0 << endl;
    }
    else if ((nPre > 0 and sSuf > 0) or (sPre > 0 and nSuf > 0))
        cout << 1 << endl;
    else
    {
        char ch = s[i];
        int count = 0;
        while (i <= j)
            if (ch != s[i++])
                count++;

        if (count == 0)
            cout << -1 << endl;
        else
            cout << 2 << endl;
    }
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