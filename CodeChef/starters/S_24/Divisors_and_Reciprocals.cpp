#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int x,a,b;
    cin>>x>>a>>b;

    double n=(b*x)/(double)a;

    if(n==(int)n && n!=x && a!=b){
        cout<<n<<endl;
    }else{
        cout<<-1<<endl;
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