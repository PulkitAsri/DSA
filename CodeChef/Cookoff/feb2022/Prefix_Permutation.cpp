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
    vector<int> input(k,0);
    vector<int> arr(n+1,0);

    for(int i=0;i<=n;i++) arr[i]=i;

    for(int i=0; i<k; i++){
        cin>>input[i]; 
    }
    sort(input.begin(),input.end());

    int st=1;
    for(int i=0; i<k; i++){
        reverse(arr.begin() + st , arr.begin() + input[i]+1);
        st=input[i] +1;
    }

    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
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