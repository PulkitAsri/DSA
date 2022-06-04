#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,w;
    cin>>n>>w;

    vector<int> arr(n,0);
    
    map<int,int> mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        if(arr[i] <= w) mp[arr[i]]++;
    }

    for(int i=0 ;i<n; i++){
        for(int j=i+1 ; j<n; j++){
            int x= arr[i]+ arr[j];
            // cout<<x<<" ";
            if(x<=w) mp[x]++;
        }
    }
    for(int i=0 ;i<n; i++){
        for(int j=i+1 ; j<n; j++){
            for(int k=j+1 ; k<n; k++){
                int x = arr[i]+ arr[j]+ arr[k];
                // cout<<x<<" ";
                if(x<=w) mp[x]++;
            }
        }
    }

    int count=0;
    for(auto i: mp){
        count++;
    }

    // cout<<endl;

    cout<<count<<endl;
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