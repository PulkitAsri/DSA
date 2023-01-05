#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    // cout<<n<<" "<<k<<endl;
    vector<vector<int>> mat(2,vector<int>(2,0));
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>> mat[i][j];
            // cout<<mat[i][j]<<" ";
        }
    }

    cout<<mat[n-1][k-1]<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}