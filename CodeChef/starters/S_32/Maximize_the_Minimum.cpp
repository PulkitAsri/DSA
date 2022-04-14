#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>
using namespace std;

#define int long long
#define endl "\n"
#define pii pair<int,int>


void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> arr(n,0);
    vector<int> arrs(n,0);
   
    // priority_queue<pii, vector<pii>, greater<pii> > pq;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        cin>>arrs[i];
    }

    sort(arrs.begin(),arrs.end());


    int x=k<n?k:n-1;
    cout<<arrs[x]<<endl;
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