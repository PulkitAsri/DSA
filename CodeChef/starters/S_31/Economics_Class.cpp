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

    vector<int> arrA(n,0);
    vector<int> arrB(n,0);

    for(int i=0; i<n; i++){
        cin>>arrA[i];
    }
    for(int i=0; i<n; i++){
        cin>>arrB[i];
    }
    int a=0;int b=0;
    int ans=0;
    for(int i=0; i<n; i++){
        a=arrA[i];
        b=arrB[i];
        ans+=(a==b);
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