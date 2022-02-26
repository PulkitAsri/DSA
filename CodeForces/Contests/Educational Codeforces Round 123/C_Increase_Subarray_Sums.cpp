#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int getSum(int BITree[], int index){

    int sum = 0; // Initialize result
    index = index + 1;
    while (index>0){
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}
 
void updateBIT(int BITree[], int n, int index, int val){

    index = index + 1;
    while (index <= n){
        BITree[index] += val;
        index += index & (-index);
    }
}

int *constructBITree(vector<int> arr, int n)
{
    // Create and initialize BITree[] as 0
    int *BITree = new int[n+1];
    for (int i=1; i<=n; i++)
        BITree[i] = 0;
 
    // Store the actual values in BITree[] using update()
    for (int i=0; i<n; i++)
        updateBIT(BITree, n, i, arr[i]);
 
    // Uncomment below lines to see contents of BITree[]
    //for (int i=1; i<=n; i++)
    //     cout << BITree[i] << " ";
 
    return BITree;
}

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int *BITree = constructBITree(arr, n);


    for(int i=0; i<=n; i++){
        // find and update  element O(??)

        // calculated max subArraySum O(n) 
        // kadanes algo maybe?
        for(int i=0; i<n; i++){

        }

        // print that max subArray sum


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

// dp[i] = best subbarray sum ending at index i 
// dp[i][j] = best subarray sum ending at index i 
//            changing atmost j elements
// dp[i] = max( nums[i], dp[i-1] + nums[i] ) 




// NOTEPAD
//  
//   -6  -1  -2   4  -6  -1  -4   4  -5  -4
//                              <-> ans= 4

//   -6  -1  -2  '6' -6  -1  -4   4  -5  -4
//              <-> ans= 6

//   -6  -1  '0' '6' -6  -1  -4   4  -5  -4
//            <---> ans= 6
 
//   -6  '1' '0' '6' -6  -1  -4   4  -5  -4
//       <---------> ans= 7

//   -6  '1' '0' '6''-4' -1  -4   4  -5  -4
//       <---------> ans= 7

//   -6  '1' '0' '6''-4' '1' -4   4  -5  -4
//       <---------> ans= 7

//   -6  '1' '0' '6''-4' '1''-2'  4  -5  -4
//       <---------> ans= 7

//   -6  '1' '0' '6''-4' '1''-2' '6' -5  -4
//       <------------------------> ans= 8

//   -6  '1' '0' '6''-4' '1''-2' '6' -5  -4
//       <------------------------> ans= 8

//   -6  '1' '0' '6''-4' '1''-2' '6' -5  -4
//       <------------------------> ans= 8

//
//
//
//
