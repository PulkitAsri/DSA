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
    cin>>n>>k;

    vector<int> arr(n+1,0);
    for(int i=0; i<=n; i++) arr[i]=i;

    if(k==1){
        if(n==1){
            cout<<"1"<<endl;
            return;
        }else{
            cout<<"-1"<<endl;
            return;
        }
    }
    int gap= n-k; 
    swap(arr[k],arr[n]);

    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    //
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