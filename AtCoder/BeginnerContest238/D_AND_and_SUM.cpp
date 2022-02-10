#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int a,s;
    cin>>a>>s;

    int aNd=a;
    int carry=2*a;
    int xOr= s-(carry);

    // cout<<xOr<<" "<<carry<<endl;

    int x,y;
    // SUM = XOR  + AND<<1;
    //s = xor + aNd<<1;

    if(xOr <0){
        x=-1;
        y=-1;
    }
    else if (s < xOr) {
        x=-1;
        y=-1;
    }
    //s-xOr is odd
    else if (abs(s - xOr) & 1) {
        x = -1;
        y = -1;
    }

    else if (s == xOr) {
        x = 0;
        y = xOr;
    }

    else {
 
        // Update the value of x
        x = (s - xOr) / 2;
 
        // Check if x & xOr value is 0
        if ((x & xOr) == 0) {
 
            // If true, update y
            y = (x + xOr);
        }
        // Otherwise assign -1 to x,
        // -1 to y
        else {
            x = -1;
            y = -1;
        }
    }

    if(x==-1 || y==-1){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
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