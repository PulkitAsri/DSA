#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"
#define ff first
#define ss second

using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> A(n,0);
    vector<int> B(n,0);

    map<pair<int,int>,int > mp;

    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    for(int i=0; i<n; i++){
        cin>>B[i];
    }

    int countAns=0;

    for(int i=0; i<n; i++){
        pair<int,int> p = {A[i],B[i]};
        pair<int,int> antiP = {B[i],A[i]};
        countAns+= mp[antiP];
        mp[p]++;
    }

    //bruteforce - ish 
    // for(int i=0; i<n; i++){  
    //     if(indexOfB.count(A[i])!=0){
    //         auto vb=indexOfB[A[i]];
    //         for(int j=0; j<vb.size(); j++){
    //             if( i<vb[j] && B[i]==A[vb[j]]) countAns++;
    //         }
    //     }
    // }

    



    cout<<countAns<<endl;
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