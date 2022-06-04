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
    int ogright=n;
    map<int,int> mp;
    for(int i=0; i<=n; i++){
        arr[i]=i;
        mp[i]=i;
    }
        // for(int j=0 ;j<=n; j++)cout<<arr[j]<<" ";cout<<endl;

    //now k queries

    for(int i=0; i<k; i++){
        int x;
        cin>>x;
        if(mp[x]==n){
            int pos=mp[x];
            int lpos=pos-1;

            mp[x]=lpos;
            mp[arr[lpos]]=pos;

            swap(arr[pos],arr[lpos]);
        }else{
            int pos=mp[x];
            int rpos=pos+1;

            mp[x]=rpos;
            mp[arr[rpos]]=pos;

            swap(arr[pos],arr[rpos]);
        }

        // for(int j=0 ;j<=n; j++)cout<<arr[j]<<" ";cout<<endl;
        
    }

    for(int i=1 ;i<=n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}