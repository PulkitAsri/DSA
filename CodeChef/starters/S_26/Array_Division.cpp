#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,ans=0;
    cin>>n;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //initial Value
    for(int i=0; i<=n-2; i++){
        ans+=abs(arr[i+1] - arr[i]);
    }

    vector<int> v;
    vector<int> v1;

    v.push_back(arr[0]);
    //finding local maxima and minima
    for (int i = 1; i <  n - 1; i++) {

        //local maxima
        if (arr[i] > arr[i - 1]) {
 
            if (i < n - 1 && arr[i] <= arr[i + 1]) {
                v1.push_back(arr[i]);
                continue;
            }
 
            // Else push it in subsequence
            else {
                v.push_back(arr[i]);
            }
        }

        //local minima
        else {
            if (i < n- 1 && arr[i + 1] < arr[i]) {
                v1.push_back(arr[i]);
                continue;
            }
 
            // Else push it in subsequence
            else {
                v.push_back(arr[i]);
            }
        }
    }
    v.push_back(arr[n-1]);

    // for(int i=0; i< v.size(); i++) cout<<v[i]<<" "; cout<<endl;
    // for(int i=0; i< v1.size(); i++) cout<<v1[i]<<" "; cout<<endl;

    int curr=0;
    for(int i=0; i<= v.size()-2; i++){
        curr+=abs(v[i+1] - v[i]);
    }
    if(v1.size()>=2)
        for(int i=0; i<= v1.size()-2; i++){
            curr+=abs(v1[i+1] - v1[i]);
        }

    ans=max(ans,curr);
    
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

    // vector<vector<int> > matrix(n , vector<int> (n,0));
    // Difference Pairs MAtrix
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         matrix[i][j]= abs(arr[i]-arr[j]);
    //         // cout<<matrix[i][j]<<" ";
    //     }
    //     // cout<<endl;
    // }