#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    double x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    if((y1/x1) > (y2/x2)) cout<< 1;
    else if((y1/x1) < (y2/x2)) cout<< -1;
    else cout<<0;
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