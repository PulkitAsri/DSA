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

    map<int,int> mp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    for(auto &p:mp){
        if(p.second>=3){
            cout<<p.first<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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