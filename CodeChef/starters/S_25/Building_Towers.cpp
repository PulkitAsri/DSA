#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int x,m;
    cin>>x>>m;

    int inventory=1;
    int bCount=0;
    //first Building me p operations such that ...2^(p) > x
    
    int p = ceil(log2(x) + 1);
    // cout<<p<<endl;
    
    inventory= (1<<p);
    m-=p;

    if(m<0){
        cout<<0<<endl;
        return;
    }else{
        bCount++;
    }
    //left m operation
    //remaining inventory left ...
    // inventory restablizes each time to make some building
    // we can always make another building

    bCount+= m;
    cout<<bCount<<endl;


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