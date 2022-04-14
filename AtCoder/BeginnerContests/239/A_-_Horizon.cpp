#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;



void solve() {
    long double n,ans;
    cin>>n;
    ans=(long double)sqrt((long double)n) * (long double )sqrt((long double)12800000 + n);
    cout.precision(7);
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}