#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> arr(n,0);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<((arr[0]==1)?"YES":"NO")<<endl;
        return;
    }

    sort(arr.begin(),arr.end());

    if(arr[n-1] - arr[n-2] > 1){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
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