#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void dfs(vector<vector<int>> &graph, int idx , int depth, set<int> &s ){
    if(depth==0) return;
    for(int x: graph[idx]){
        s.insert(x);
        dfs(graph, x, depth-1, s);
    }
}

void solve() {
    int n,m;
    cin>>n>>m;

    vector<vector<int>> graph(n+1);
    for(int i=1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        // cout<<u<<v<<endl;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int q;
    cin>>q;

    for(int i=0; i<q; i++){
        //for  each query
        int start,depth;
        cin>>start>>depth;
        
        set<int> s;
        s.insert(start);
        dfs(graph, start, depth, s);

        int ans=0;
        for(int x: s){
            ans+=x;
        }
        cout<<ans<<endl;

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