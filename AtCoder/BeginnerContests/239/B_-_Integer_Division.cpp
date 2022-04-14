#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    long long n,k;
    cin>>n;
    if(n>=0)
        cout<<(n/10)<<endl;
    else if(n<0 && n%10!=0)
        cout<< n/10 - 1;
    else cout<< n/10;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}