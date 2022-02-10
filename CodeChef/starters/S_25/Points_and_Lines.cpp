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

    set<int> setX;
    set<int> setY;

    int lines=0;


    // vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        if(setX.count(x)==0){
            lines++;
            setX.insert(x);
        }
        if(setY.count(y)==0){
            lines++;
            setY.insert(y);
        }
    }

    cout<<lines<<endl;
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