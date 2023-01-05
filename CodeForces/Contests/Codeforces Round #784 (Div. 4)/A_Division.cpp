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
    if(n>= 1900){
        cout<<"Division 1";
    }else if(n>= 1600 ){
        cout<<"Division 2";
    }
    else if(n>= 1400 ){
        cout<<"Division 3";
    }
    else {
        cout<<"Division 4";
    }

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