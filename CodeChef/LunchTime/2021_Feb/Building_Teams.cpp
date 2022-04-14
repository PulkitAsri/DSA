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
    cin>>n>>k;

    vector<vector<int> > arr(n+1,vector<int> ());
    vector<int> color(n+1,-1);
    for(int i=0; i<k; i++){
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    
    for(int i=1; i<=n; i++){

        if(color[i]!=-1) continue;
        queue<int> q;
        bool c=false;
        q.push(i);
        color[i]=1;
        while(q.size()){
            int x= q.front();
            // cout<<x<<endl;
            q.pop();
            int nodeColor=color[x];
        
            for(int i=0; i<arr[x].size(); i++){
                int nb = arr[x][i];
                
                if(color[nb]==nodeColor){
                    cout<<"IMPOSSIBLE"<<endl;
                    return;
                }
                if(color[nb] != -1) continue;
                color[nb]=(color[x] == 1)?2:1;
                q.push(nb);
            }
        }
    }
    

    for(int i=1; i<=n; i++){
        cout<<color[i]<<" ";
    }

    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;

    while(t--) {
        solve();
    }
    return 0;
}