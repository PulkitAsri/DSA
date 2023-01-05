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


    int evenSum=0;
    int oddSum=0;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];

        if(arr[i]%2==0){
            evenSum+=arr[i];
        }else{
            oddSum+=arr[i];
        }
    }

    if((oddSum + evenSum)%(n/2)==0  and ((2*(oddSum + evenSum)/n)) %2 == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    // int oddRemainder= oddSum % (n/2);
    // int evenReaminder= evenSum % (n/2);

    // int oddMean= (oddSum % (n/2)==0)? oddSum/(n/2): -1;
    // int evenMean= (evenSum % (n/2)==0)? evenSum/(n/2): -1;

    // if(oddMean== -1 or evenMean == -1){
    //     if((oddRemainder + evenReaminder)%(n/2) == 0){
    //         cout<<"YES"<<endl;
    //     }else {
    //         cout<<"NO"<<endl;
    //     }
    //     return;
    // }else if(oddMean%2 == 1 xor evenMean%2 ==0){
    //     cout<<"NO"<<endl;
    //     return;
    // }else {
    //     cout<<"YES"<<endl;
    // }
    
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