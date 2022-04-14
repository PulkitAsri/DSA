#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;
void display(){
    
}

void printSubsetsRec(vector<int> arr, int i, int sum, vector<int>& p, vector<vector<bool>> dp)
{
    // If we reached end and sum is non-zero. We print
    // p[] only if arr[0] is equal to sun OR dp[0][sum]
    // is true.
    if (i == 0 && sum != 0 && dp[0][sum])
    {
        p.push_back(arr[i]);
        // Display Only when Sum of elements of p is equal to sum
          if (arr[i] == sum)
              display(p);
        return;
    }
 
    // If sum becomes 0
    if (i == 0 && sum == 0)
    {
        display(p);
        return;
    }
 
    // If given sum can be achieved after ignoring
    // current element.
    if (dp[i-1][sum])
    {
        // Create a new vector to store path
        vector<int> b = p;
        printSubsetsRec(arr, i-1, sum, b, dp);
    }
 
    // If given sum can be achieved after considering
    // current element.
    if (sum >= arr[i] && dp[i-1][sum-arr[i]])
    {
        p.push_back(arr[i]);
        printSubsetsRec(arr, i-1, sum-arr[i], p, dp);
    }
}

void printVector(vector<int> arr){

    int n=arr.size();
    for(int i=0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
bool canPartition(vector<int>& nums, vector<int> &subset, vector<vector<bool>> dp) {
        long long sum=0;
        for(int &x:nums) sum+=x;
        
        if(sum%2==1){
            return false;
        }else{
            return isSubsetSum(nums, nums.size(), sum/2, subset, dp);
        }
    }

bool isSubsetSum(vector<int> &arr, int n, int sum, vector<int> subset, vector<vector<bool>> dp)
{
    if (sum == 0)
        return dp[n][sum]= true;
    if (n == 0)
        return dp[n][sum]= false;

    
 
    if (arr[n - 1] > sum)
        return dp[n][sum]= isSubsetSum(arr, n - 1, sum,subset,dp);

    subset.push_back(arr[n-1]);
    bool ans1=isSubsetSum(arr, n - 1, sum - arr[n - 1],subset,dp);
    subset.pop_back();
    bool ans2=isSubsetSum(arr, n - 1, sum, subset,dp);

    return dp[n][sum]= ans1 or ans2;
}
void solve(int t) {
    int n,k;
    cin>>n;

    int sum=0;
    vector<int> arr(2*n,0);

    for(int i=0; i<n; i++){
        arr[i]=(2*i+1);
        sum+=arr[i];
        cout<<arr[i]<<" ";
    }

    for(int i=n; i<2*n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    vector<int> subset;
    vector<vector<bool>> dp(n+1, vector<bool>(sum+1,0));
    if(canPartition(arr,subset, dp)){
        printVector(subset);
    }else{
        
    }

    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int T=t;
    while(t--) {
        solve(T-t);
    }
    return 0;
}