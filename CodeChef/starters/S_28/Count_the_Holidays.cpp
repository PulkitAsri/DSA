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

    set<int> s;
    //weekends
    for(int i=6; i<30; i+=7){
        s.insert(i);
        s.insert(i+1);
    }

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    
    cout<<s.size()<<endl;
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