#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    if(n==1 && m==1){
        cout<<0<<endl;
    }else if((n==1 && (c==1 or c==m)) or( m==1 &&( r==1 or r==n))){
        cout<<1<<endl;
    }else if((r==1 && c==1) or (r==1 && c==m) or (r==n && c==1) or (r==n && c==m) or (n==1 ) or (m==1)){
        cout<<2<<endl;
    }else if(r==1 or c==1 or r==n or c==m ){
        cout<<3<<endl;
    }else{
        cout<<4<<endl;
    }

    // cout<<endl;
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