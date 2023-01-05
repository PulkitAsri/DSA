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
    cin>>s;
    // cin>>n>>k;
    int a=0,b=0;
    for(int i=0; i<3; i++){
        a+=s[i]-'a';
    }
    for(int i=0; i<3; i++){
        b+=s[i+3]-'a';
    }

    string ans= (a==b)?"YES":"NO";
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