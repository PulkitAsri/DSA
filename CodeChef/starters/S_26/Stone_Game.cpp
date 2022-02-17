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
    string alice,bob;
    cin>>alice>>bob;

    string ans = alice + bob;

    sort(alice.begin(),alice.end());
    sort(bob.begin(), bob.end(),greater<int>());

    int a=0;
    int b=0;

    int l=0;
    int r=2*n -1;
    bool flag= true;
    for(int i=0 ; i<2*n; i++ ){
        if(alice[a] <= bob[b]){
            if(flag){
                sort(alice.begin(),alice.end(),greater<int>());
                sort(bob.begin(), bob.end());
            }
            if(i%2==0){
                ans[r]=alice[a++];
                l++;
            }else{
                ans[l]=bob[b++];
                l++;
            }
        }else{
            if(i%2==0){
                ans[r]=alice[a++];
                r--;
            }else{
                ans[r]=bob[b++];
                r--;
            }
            
        }  
    }
    cout<<ans<<endl;
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
// 
// _ _ _ _ _ _ 
