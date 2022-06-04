#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int fact(int i){
    int ans=1;
    while(i!=0){
        ans*=i;
        i--;
    }
    return ans;
}

int comb(int n,int r){

    if(r > n/2) r= n-r;

    int a=1;
    int x=n;
    for(int i=0; i<r; i++){
        a*=x;
        x--;
    }
    // cout<<a<<" ";
    int c= fact(r);
    // cout<<c<<" ";
    return (a/c);
}

void solve() {
    int n,k;
    cin>>n;

    // cout<<comb(6,2)<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
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