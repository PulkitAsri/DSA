#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    double a,b,c,x;
    cin>>a>>b>>c>>x;

    double ans=0;

    if(x<=a){
        ans=1.0;
    }else if(x<=b and x>=(a+1)){
        ans= c/(b-a);
    }else{
        ans=0.0;
    }

    cout<<fixed<<setprecision(12)<<ans<<endl;
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