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
    map<int,int> freq;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }

    int x=-1;
    int maxFreq=0;
    for(auto p:freq){
        if(p.second > maxFreq){
            maxFreq=p.second;
            x=p.first;
        }
    }
    int posToFill=n-maxFreq;
    int ans=0;

    int copies=maxFreq;
    while(posToFill){
        ans++;
        ans+=min(posToFill,copies);
        posToFill=max(0ll,posToFill - copies);
        
        copies*=2;
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