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

    vector<int> A(n+1,0);
    vector<int> B(n+1,0);

    for(int i=1; i<=n; i++){
        cin>>A[i];
    }
    for(int i=1; i<=n; i++){
        cin>>B[i];
    }

    set<int> st[n];

    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}