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

    vector<pair<string,int>> arr(n);

    map<string, int> mp;
    int mx=-1;
    int ans=-1;
    for(int i=0; i<n; i++){
        string s;
        int points;
        cin>>s>>points;

        arr[i]={s,points};

        if(mp.count(s)==0){
            mp[s]=points;
            if(points > mx){
                mx=points;
                ans=i+1;
            }
        }
    }

    cout<<ans<<endl;
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