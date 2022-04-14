#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> arr(n+1,0);
//     for(int i=0; i<=n; i++) arr[i]=i;

//     cout<<endl;
// }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    string s= (n>4 || n<2) ? "Yes" : "No";

    cout<<s;
    
}