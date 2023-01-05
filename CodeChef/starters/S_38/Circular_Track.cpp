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

    int a,b,m;
    cin>>a>>b>>m;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    // cout<<(b-a)%m<<" "<<(a-b+m)%m<<" ";
    cout<<min((b-a)%m, (a-b+m)%m)<<endl;
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