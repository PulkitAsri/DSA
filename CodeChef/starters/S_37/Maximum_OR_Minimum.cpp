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
    cin>>n;

    int zeroes=0;
    int ones=0;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==0) zeroes++;
        else ones++;
    }

    if(zeroes > ones) cout<<0;
    else cout<<1;

    cout<<endl;
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