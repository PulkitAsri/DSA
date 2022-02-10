#include <bits/stdc++.h>
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

    vector<int> arr(2*n,0);
    vector<int> freq(n+3,0);

    int mex=0;
    int mx=0;
    for(int i=0; i < 2*n; i++){
        cin>>arr[i];
        freq[arr[i]]++;

        if(arr[i]==mex){
            while(freq[mex]!=0) mex++;
        }

        mx=max(mx,arr[i]);
    }

    // cout<<mex<<endl;
    //all numbers should be minimum 2
    for(int i=0; i<mex; i++){
        if(freq[i]<2){
            cout<< "NO"<<endl;
            return;
        }
    }
    cout<< "YES"<<endl;

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