#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int setBitNumber(int n)
{
 
    int k = (int)(log2(n));
    return 1 << k;
}
void solve() {
    int n,k;
    cin>>n;
    int ans=0;
    int msb=setBitNumber(n);
    int x=1;
    while(x < msb){
        int p= x;
        x=x<<1;
        ans+= x-1 -p;
    }
    ans+=(n-msb);
    cout<<ans<<endl;
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