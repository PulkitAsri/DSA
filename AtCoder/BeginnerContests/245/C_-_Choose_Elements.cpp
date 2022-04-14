#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

// bool solve(vector<int> &A, vector<int> &B,int &n,int &k, int idx, int curr){
    

//     if(idx==n){
//         return true;
//     }

//     bool ans = true;

//     if( abs(A[idx]-curr) <= k ){
//         solve(A,B,n,k,idx + 1,A[idx]);
//     }
//     if( abs(B[idx] - curr) <= k ){
//         solve(A,B,n,k,idx + 1,B[idx]);
//     }
// }

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> A(n,0);
    vector<int> B(n,0);

    vector<bool> dpA(n,0);
    vector<bool> dpB(n,0);


    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    for(int i=0; i<n; i++){
        cin>>B[i];
    }

    dpA[n-1]=true;
    dpB[n-1]=true;
    for(int i=n-2; i>=0; i--){
        //A
        if( (dpA[i+1] and abs(A[i] - A[i+1])<=k) or (dpB[i+1] and abs(A[i] - B[i+1]) <= k )){
            dpA[i]=true;
        }else{
            dpA[i]=false;
        }

        //B
        if( (dpA[i+1] and abs(B[i] - A[i+1])<=k) or (dpB[i+1] and abs(B[i] - B[i+1]) <= k )){
            dpB[i]=true;
        }else{
            dpB[i]=false;
        }
    }

    // for(int i=0; i<n; i++){
    //     cout<<(dpA[i]?"True ":"False ");
    // }
    // cout<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<(dpB[i]?"True ":"False ");
    // }
    // cout<<endl;

    cout<<((dpA[0] or dpB[0])?"Yes":"No")<<endl;
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