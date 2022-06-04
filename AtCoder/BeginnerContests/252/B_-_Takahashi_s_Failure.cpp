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

    vector<int> A(n+1,0);
    vector<int> B(k+1,0);

    map<int,int> mp;
    int mx=-1;
    for(int i=1; i<=n; i++){
        cin>>A[i];
        mx=max(mx,A[i]);
    }

    for(int i=1; i<=k; i++){
        cin>>B[i];
        mp[A[B[i]]]++;
    }
    if(mp[mx]==0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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