#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;

    vector<string> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans=INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int diff=0;
            for(int k=0; k<m; k++){
                diff+=abs(arr[i][k]-arr[j][k]);
            }
            ans= min(ans,diff);
        }
    }

    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}