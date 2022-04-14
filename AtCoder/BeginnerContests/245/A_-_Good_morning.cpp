#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a<c){
        cout<<"Takahashi";
    }else if(c<a){
        cout<<"Aoki";
    }else{
        if(b*60 < (d*60)+1){
            cout<<"Takahashi";
        }else{
            cout<<"Aoki";

        }
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