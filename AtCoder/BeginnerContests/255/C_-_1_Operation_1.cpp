#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,d,x,a;
    cin>>x>>a>>d>>n;

    int lastNo= a + (n-1)*d;
    // cout<<lastNo<<endl;
    if(x >= lastNo or x <= a){
        cout<<min(abs(x-lastNo), abs(x-a))<<endl;
        return;
    }
    int t= ((x-a)/d);
    int u= ((x-a)%d ==0) ? t : t+1;
    int l= t;
    // cout<<u<<" "<<l<<endl;

    cout<<min(abs((a + u*d)-x),abs((a + l*d)-x))<<endl;

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