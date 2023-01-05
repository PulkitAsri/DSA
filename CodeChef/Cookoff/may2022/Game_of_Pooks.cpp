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
    int count=0;
    
    if(n==1){
        count=1;
    }else if(n==2){
        count=1;
    }else if (n==3){
        count=2;
    }else {
        count=n ;
    }

    cout<<count<<endl;
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


// 11->7->3