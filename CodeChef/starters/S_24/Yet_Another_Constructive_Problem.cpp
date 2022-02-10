#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int calc(int x,int y,int z){
    return (x|y)&(y|z)&(z|x);
}

void solve() {
    int x;
    cin>>x;
    if(x==1){
        cout<<0<<" "<<1<<" "<<3<<endl;
        return;
    }

    if(calc(x,x+1,x+2)==x){
        cout<<x<<" "<<(x+1)<<" "<<(x+2);
    }else if(calc(x-1,x,x+1)==x){
        cout<<(x-1)<<" "<<(x)<<" "<<(x+1);
    }else if(calc(x-2,x-1,x)==x){
        cout<<(x-2)<<" "<<(x-1)<<" "<<(x);
    }else{
        cout<<-1;
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
//3 4 5
// 2 3 4
// 13 14 15
// 100000000 100000001 100000002