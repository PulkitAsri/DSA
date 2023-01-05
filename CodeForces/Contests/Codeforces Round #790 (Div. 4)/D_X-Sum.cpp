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
    int mx=-1;
    vector<vector<int>> arr(n,vector<int> (m,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int ans=-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            // 2 diagonals - number itself 
            int sum=0;
            for(int k=i+1,l=j+1; k<n && l<m; k++,l++){
                sum+=arr[k][l];
            }
            for(int k=i+1,l=j-1; k<n && l>=0; k++,l--){
                sum+=arr[k][l];
            }
            for(int k=i-1,l=j+1; k>=0 && l<m; k--,l++){
                sum+=arr[k][l];
            }
            for(int k=i-1,l=j-1; k>=0 && l>=0; k--,l--){
                sum+=arr[k][l];
            }

            sum+= arr[i][j];
            // if(sum>ans) cout<<i<<" "<<j<<endl;
            ans=max(ans,sum);
            
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