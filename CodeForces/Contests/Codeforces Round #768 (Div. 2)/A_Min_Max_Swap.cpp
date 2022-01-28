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
    vector<int> b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            int temp=a[i];
            a[i]=b[i];
            b[i]=temp;
        }
    }
    int maxA=a[0],maxB=b[0];
    for(int i=0;i<n;i++){
        // cout<<a[i]<<" "<<b[i]<<endl;
        maxA=max(maxA,a[i]);
        maxB=max(maxB,b[i]);
    }
    cout<<maxA*maxB<<endl;
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