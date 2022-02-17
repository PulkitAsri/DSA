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
    int even=0,odd=0;

    vector<int> arr(2*n,0);
    for(int i=0; i<2*n; i++){
        cin>>arr[i];
        if(arr[i]%2==0) even++;
        else odd++;
    }
    // cout<<even<<" "<<odd<<endl;
    string ans=(even%2==0 && odd%2==0)?"YES" :"NO";

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