#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int MSB(int n)
{
    int k = (int)(log2(n));
    return 1 << k;
}
void solve() {
    int n,k;
    cin>>n;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int x= MSB(arr[0]);

    vector<int> bits(32,0);

    for(int i=0; i<n; i++){
        bits[log2(MSB(arr[i]))]++;
    }
    int ans=0;
    for(int i=0; i<32; i++){
        ans+=bits[i]*(bits[i]-1)/2;
    }

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