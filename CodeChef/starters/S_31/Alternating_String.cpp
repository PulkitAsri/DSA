#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n;
    string s;

    cin>>n>>s;
    vector<int> arr(2,0);

    for(int i=0; i<n; i++){
        arr[s[i]-'0']++;
    }

    if(arr[0] == arr[1]){
        cout<<n;
    }else {
        cout<<(2*min(arr[0],arr[1])) +1;
    }

    cout<<endl;
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