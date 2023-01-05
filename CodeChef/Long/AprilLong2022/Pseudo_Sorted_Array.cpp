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

    int x=-1;

    for(int i=1; i<n; i++){
        if(arr[i]< arr[i-1]){
            x=i;
            break;
        }
    }

    if(x==-1){
        cout<<"YES"<<endl;
        return;
    }

    swap(arr[x], arr[x-1]);

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
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