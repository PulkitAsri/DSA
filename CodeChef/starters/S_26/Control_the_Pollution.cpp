#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,x,y;
    cin>>n>>x>>y;

    int maxCars = ceil(n/4.0);
    int b = 0;
    int ans=INT_MAX;

    for(int c=maxCars; c>=0; c--){
        //car people transferred to buses
        int temp= ceil((n - c*4)/100.0) ;
        b =  temp > 0 ?temp :0;

        int poll= x*b + y*c;
        ans= min(ans, poll);
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