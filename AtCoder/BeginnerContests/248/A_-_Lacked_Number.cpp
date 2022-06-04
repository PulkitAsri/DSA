#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    string s;
    cin>>s;

    vector<bool> visited(10,0);

    for(char c: s){
        visited[c-'0']= true;
    }

    for(int i=0; i<10; i++){
        if(visited[i]==false){
            cout<<i<<endl;
            return;
        }
    }
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