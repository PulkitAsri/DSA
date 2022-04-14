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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    if (n % 2 == 1){
        cout<<k<<" ";
        int j=1;
        for (int i = 1; i <= n/2; i++){
            cout<< k-i<<" ";
            cout<< k+i <<" ";
        }
    }else{
        int j=0;
        for (int i = 1; i <= n/2; i++){
            cout<< k-i<<" ";
            cout<< k+i <<" ";
        }
    }
    
    cout << endl;
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