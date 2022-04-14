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
    for(int i=2; i<=n; i++){
        arr[i]=i-1;
    }
    arr[1]=n;

    for(int i=1; i<k; i++){
        if(i<=n-2)
            swap(arr[i+1],arr[i+2]);
        else
            swap(arr[1],arr[n]);   
    }

    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }

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