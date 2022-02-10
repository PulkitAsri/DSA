#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<int> cuts(n + 1, 0);
    vector<int> prefix(n + 2, 0);
    int pre = 0;
    prefix[0]=0;
    for (int i = 0; i < n; i++)
    {
        cin >> cuts[i];
        pre += cuts[i];
        prefix[i+1] = ((pre) % 360);
    }
    prefix[n+1]=360;

    sort(prefix.begin(), prefix.end());

    int mx=0;
    for (int i = 1; i < n+2; i++){
        mx=max(mx,prefix[i]-prefix[i-1]);
    }
    cout<<mx<<endl;
}