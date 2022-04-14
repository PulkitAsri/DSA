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
    string s;
    cin>>n>>s;

    vector<int> v;

    int x=(s[0]=='1');
    int ans=0;
    for(char c:s){
        if(c=='1'){
            ans=1;
            break;
        }
    }
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1] and s[i]=='1'){
            ans=2;
            break;
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