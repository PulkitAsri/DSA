#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> &A, vector<int> &B, int n, int m)
{

    int prev = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (A[i] < prev)
            return false;
        prev = A[i];
    }

    for (int i = 0; i < m; i++)
    {
        if (B[i] < prev)
            return false;
        prev = B[i];
    }

    return true;
}

int solve(vector<int> &A, vector<int> &B, int n, int m, int level)
{

    if (level > 3 * (m + n))
        return INT_MAX;

    if (sorted(A, B, n, m))
        return level;

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (A[i] == i + 1 and B[j] == n + j + 1)
                continue;

            swap(A[i], B[j]);
            ans = min(ans, solve(A, B, n, m, level + 1));
            swap(A[i], B[j]);
        }
    }

    return ans;
}

int main()
{

    int n, m;
    cin >> n >> m;

    vector<int> A(n), B(m);

    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 0; i < m; i++)
        cin >> B[i];

    int ans = solve(A, B, n, m, 0);

    cout << ans << endl;
}