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
    int zeroes=0;
    int ones=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0') zeroes++;
        else ones++;
    }
    // cout<<zeroes<<" "<<ones<<endl;
    int diff=abs(zeroes-ones);
    string ans="hehe";
    if(n%2==0){
        ans=(diff%2==0)?"YES":"NO";
    }else{
        ans="YES";
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