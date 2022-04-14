#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,k,x;
    cin>>n>>k>>x;

    vector<int> arr(n,0);
    int total=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        total+=arr[i];
    }
    
    sort(arr.begin(), arr.end());
    // for(int i:arr) cout<<i<<" "; cout<<endl;
    
    for(int i=0; i<n; i++){
        if(k==0) break;
        int couponsMax=arr[i]/x;
        if(couponsMax > k){
            couponsMax=k;
        }

        k-=couponsMax;
        arr[i]=arr[i] - (couponsMax*x);
        total-= (couponsMax*x);
    }

    if(k!=0){
        sort(arr.begin(), arr.end());
        for(int i=n-1; i>=0; i--){
            if(k==0) break;
            k--;
            total-=arr[i];
        }
    }
    cout<<total<<endl;
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