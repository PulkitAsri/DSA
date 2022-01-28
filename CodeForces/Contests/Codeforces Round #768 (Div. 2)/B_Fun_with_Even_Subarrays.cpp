#include <bits/stdc++.h>
// #include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n,0);
    vector<int> prefix(n,0);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    prefix[0]=a[0];
    for(int i=1;i<n;i++){
        prefix[i]=a[i]+prefix[i-1];
    }
    
    cout<<(n)<<endl;
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