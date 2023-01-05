#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define double long double
#define endl "\n"
#define ff first 
# define ss second

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;

    set<int> s;
    vector<pair<int,int>> coods(n,{-1,-1});

    for(int i=1; i<=k; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        coods[i].first=x;
        coods[i].second=y;
    }
    double ans= INT64_MAX;
    for(int j: s){
        auto [x,y]= coods[j];

        double mx=0;
        for(int i=0 ;i<n; i++){
            int dx= x - coods[i].ff;
            int dy= y - coods[i].ss;

            double distance= sqrt(dx*dx + dy*dy);
            mx= max((double)mx, distance);
        }
        ans= min(mx,ans);

    }

    cout<< fixed << setprecision(10)<<ans<<endl;
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