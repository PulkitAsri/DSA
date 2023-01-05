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

    vector<vector<char>> graph(11);
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        graph[s[0]-'a'].push_back(s[1]);
        if(s[0]!=s[1])
            graph[s[1]-'a'].push_back(s[0]);
        
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