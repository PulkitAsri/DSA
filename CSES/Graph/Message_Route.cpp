#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int> > graph(n+1);
    vector<int> dist(n+1,INT_MAX);
    dist[1]=0;

    for(int i=0; i<m; i++){
        int start,end;
        cin>>start>>end;
        graph[start].push_back(end);
        graph[end].push_back(start);
    }

    queue<int> q;
    vector<int> prev(n+1);
    q.push(1);
    prev[1]=-1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0; i<graph[x].size(); i++){
            if(dist[graph[x][i]]!=INT_MAX) continue;
            q.push(graph[x][i]);
            dist[graph[x][i]]= dist[x] + 1;
            prev[graph[x][i]]=x;
        }
    }
    if(dist[n]==INT_MAX){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }

    cout<<dist[n] + 1<<endl;
    int j=n;
    vector<int> ans;
    while(j>0){
        ans.push_back(j);
        j=prev[j];
    }
    reverse(ans.begin(), ans.end());
    for(int i=0; i< dist[n]+1; i++){
        cout<<ans[i]<<" ";
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