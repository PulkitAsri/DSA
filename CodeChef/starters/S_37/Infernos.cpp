#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,x;
    cin>>n>>x;

    int m=0;
    int single=0;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        m=max(arr[i],m);

        single += (arr[i]%x==0)? arr[i]/x: (arr[i]/x) +1;
    }

    int multi=m;
    

    cout<<min(multi,single)<<endl;
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