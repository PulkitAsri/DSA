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
    if(n>=3){
        cout<<"NO"<<endl;
        return;
    }else if(n==2 &&( s=="00" || s=="11")){
        cout<<"NO"<<endl;
        return;
    }else{
        cout<<"YES"<<endl;
        return;
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