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

    vector<int> arr(n+1,0);

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<=k; i++){
        vector<int> subArr;
        int j=0;
        while(i + j*k <= n){
            subArr.push_back(arr[i + j*k]);
            // cout<<arr[i + j*k]<<" ";
            j++;
        }
        // cout<<endl;
        sort(subArr.begin(), subArr.end());
        j=0;
        while(i + j*k <= n){
            arr[i + j*k]= subArr[j];
            // cout<<i + j*k<<" ";
            j++;
        }
        // cout<<endl;
    }

    for(int i=2; i<=n; i++){
        if(arr[i] >= arr[i-1]){
            continue;
        }else{
            cout<<"No"<<endl;
            return;
        }
    }

    cout<<"Yes"<<endl;
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