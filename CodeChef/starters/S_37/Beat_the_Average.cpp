#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,m,avg,k;
    cin>>n>>m>>avg;
    float temp= avg/(float)(n-1);
    
    if(avg==m){
        cout<<0<<endl;
        return;
    }


    float p= n/(avg+1);
    int ans = (n%(avg+1)==0)? n-p: n-(p+1);

    cout<<ans<<endl;
    // if(avg >=n ){
    //     cout<<n-1<<endl;
    // }else if( avg < n){
    //     cout<<avg<<endl;
    // }
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