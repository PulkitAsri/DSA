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

    int mx=k;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        k+=x;
        mx=max(mx,k);
    }

    cout<<mx<<endl;
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