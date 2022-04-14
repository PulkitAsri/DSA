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
    string p, q;
    cin >> p >> q;
    int count=0;
    if (q.length() < p.length())
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    int i = 0, j = 0;

    while ( i < p.length() and j < q.length())
    {
        // cout<<i<<" "<<j<<" "<<count<<endl;
        if ( p[i] == q[j])
        {
            i++;
            j++;
        }
        else
        {
            count++;
            j++;
        }
    }

    if(i == p.length()){
        cout << count + (q.length()-j) << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int ti = 1;
    while (t--)
    {
        cout << "Case #" << ti << ": " ;
        solve();
        ti++;
    }
    return 0;
}