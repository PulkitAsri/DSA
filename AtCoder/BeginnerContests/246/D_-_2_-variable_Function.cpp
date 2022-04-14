#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int f(int a,int b){
    return (a + b)*(a*a + b*b);
}
void solve() {
    int n,k;
    int MAX=1e6;
    cin>>n;
    
    if(n==0){
        cout<<0<<endl;
        return;
    }
    int ans=INT64_MAX;
    for(int i=0; i<MAX;i++){
        //binary search

        int l=0;
        int r=MAX;
        
        while(l<=r){
            int m=(l+r)/2;

            if(f(i,m)<n){
                l=m+1;
            }else if(f(i,m)>n){
                r=m-1;
            }else{
                cout<<n<<endl;
                return;
            }
        }
        if(f(i,l)>=n)
            ans=min(ans,f(i,l));
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