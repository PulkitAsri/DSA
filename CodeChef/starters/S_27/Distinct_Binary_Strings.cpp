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
    string s;
    cin>>s;

    char c='n';
    int ans=0;
    for(int i=0; i<n; i++){
        if(c!=s[i]){
            ans++;
            c=s[i];
        }
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