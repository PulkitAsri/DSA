#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,k,x;
    cin>>n;

    vector<int> fun(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>fun[i];
    }

    vector<int> connections(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>connections[i];
    }


    vector<int> starts;

    vector<bool> visited(n+1,0);

    for(int i=1; i<=n; i++){
        if(visited[i]==false){
            while(connections[i]!=0){
                visited[connections[i]]=true;
            }
        }else continue;
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