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



    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool evenPlaceParity=arr[1]%2;
    bool oddPlaceParity=arr[0]%2;

    for(int i=2; i<n; i+=2){
        if(oddPlaceParity!=arr[i]%2){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=1; i<n; i+=2){
        if(evenPlaceParity!=arr[i]%2){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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