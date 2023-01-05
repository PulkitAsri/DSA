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
    map<int,int> mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    // for(int x:arr) cout<<x<<" "; cout<<endl;
    for(int i=2; i<n; i++){
        if(2*abs(arr[i]-arr[i-1]) != abs(arr[i-1] - arr[i-2]) 
            and 
            abs(arr[i]-arr[i-1]) != 2*abs(arr[i-1] - arr[i-2])){
            // cout<<i<<" ";
            cout<<"No"<<endl;
            return;
        }
    }

    cout<<"Yes"<<endl;
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