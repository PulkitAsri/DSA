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

    int f1=0;
    int f2=0; 
    // vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x==-1) f1++;
        else f2++;
    }
   // cout<<f1<<" "<<f2<<endl;
   if(abs(f1-f2)==2 && f1%2!=0)
    cout<<"No";
    else if(abs(f1-f2)<=2)
    cout<<"Yes";
    else
    cout<<"No";
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