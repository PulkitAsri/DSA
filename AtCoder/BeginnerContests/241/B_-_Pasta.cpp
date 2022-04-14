#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;

    map<int,int> mp;
    vector<int> arrB(m,0);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    for(int i=0; i<m; i++){
       cin>>arrB[i];
       if(mp[arrB[i]]){
           mp[arrB[i]]--;
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
    // int t;
    // cin>>t;
    // while(t--) {
        solve();
    // }
    return 0;
}