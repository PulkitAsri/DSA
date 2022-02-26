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
    n=s.length();
    int count=0;
    int i=0;
    for( i=0; i<n/2; i++){
        if(s[i]==s[n-1-i]){
            count++;
        } else break;
    }
    if(i==n/2)
    cout<<n-i-1<<endl;
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