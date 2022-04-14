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

    sort(arr.begin(),arr.end());

    int x=1;
    int remaining=0;
    for(int i=0; i<n; i++){
        int temp=arr[i];
        
        while(temp >= x){  
            temp-=x;
            x++;
            // cout<<temp<<" "<<x<<endl; 
        }
        remaining+=temp;
    }
    // cout<<x<<" "<<remaining<<endl;
    int temp=remaining;
    while(temp >= x){  
        temp-=x;
        x++;
        // cout<<temp<<" "<<x<<endl; 
    }

    cout<<x-1<<endl;
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