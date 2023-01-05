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

    vector<int> arr(n,0);
    int ans=0;
    map<int,int> freq;
    for(int i=0; i<n; i++){
        cin>> arr[i];
        int aj= (k-arr[i])^arr[i];
        ans+= freq[aj];
        freq[arr[i]]++;
    }

    // map < pair<int,int>,int > pairCounted;
    
    for(int i=0; i<n; i++){

        //FROM the formula


        // cout<<arr[i]<<" "<<aj<<endl;
    
    }

    cout<<ans<<endl;
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