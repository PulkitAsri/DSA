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
    vector<int> pairity(2,0);

    for(int i=0; i<n; i++){
        cin>>arr[i];
        pairity[arr[i]%2]++;
    }
    // cout<<pairity[0]<<" "<<pairity[1]<<endl;

    if(pairity[0]==0 or pairity[1]==0){
        cout<<0<<endl;
        return;
    }
    
    if(pairity[1]%2==0){
        cout<<min(pairity[1]/2,pairity[0])<<endl;
    }else{
        //only odd is possible
        cout<<pairity[0]<<endl;
    }

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