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
    vector<pair<int,int> > vertices(4);
    map<int,int> mpx;
    map<int,int> mpy;
    for(int i=0; i<3; i++){
        cin>>n>>k; 
        vertices[i]=make_pair(n,k);
        mpx[n]++;
        mpy[k]++;
    }

    for(auto i :mpx){
        if(i.second%2==1){
            cout<<i.first<<" ";
        }
    }
    for(auto i :mpy){
        if(i.second%2==1){
            cout<<i.first<<" ";
        }
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