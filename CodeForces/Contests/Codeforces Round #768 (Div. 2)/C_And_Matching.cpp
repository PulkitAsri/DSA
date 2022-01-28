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
    int n,k;
    cin>>n>>k;
    vector< vector<int> > ands(n);
    for(int i=0;i<n;i++){
        ands[i]=vector<int>(n);
        for(int j=0;j<n;j++){
            ands[i][j]= (i&j);
            cout<<ands[i][j]<<" ";
        }
        cout<<endl;
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