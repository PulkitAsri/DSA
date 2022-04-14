#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;
int MOD= 998244353;
void recc(int n, int track, int &ans, int t){
    if(n==0){
        ans+=track%MOD;
    }

    if(t==1){
        track=(track*2)%MOD;
        recc(n-1,track,ans,t);
        recc(n-1,track,ans,t+1);
    }else if(t==9){
        track=(track*2)%MOD;
        recc(n-1,track,ans,t);
        recc(n-1,track,ans,t-1);
    }else{
        track=(track*3)%MOD;
        recc(n-1,track,ans,t);
        recc(n-1,track,ans,t+1);
        recc(n-1,track,ans,t-1);
    }

}
void solve() {
    int n,k;
    
    cin>>n;

    int ans=0;
    int track=1;
    int prev=-1;

    for(int i=1; i<=9; i++){
        prev=i;
        recc(n-1,track,ans,prev);
    }
    cout<<ans<<endl;
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