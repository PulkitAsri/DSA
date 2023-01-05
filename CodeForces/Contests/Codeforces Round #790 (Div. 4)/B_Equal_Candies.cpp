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

    vector<int> arr(n,0);
    int sum=0;
    int m=INT_MAX;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
        m=min(m,arr[i]);
    }


    cout<<(sum- m*n)<<endl;
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