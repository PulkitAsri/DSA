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
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int curr=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==curr){
            continue;
        }else{
            curr= arr[i];
            ans.push_back(arr[i]);
        }
    }

    cout<<ans.size()<<endl;
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