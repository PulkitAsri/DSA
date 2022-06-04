#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"
#define ff first
#define ss second

using namespace std;

void solve() {
    int n,k;
    cin>>n;

    vector<pair<int,pair<int,int>>> arr(n);

    vector<int> timesFeed(n,0);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        arr[i]= { x, {(i+1),((i+1)%n)+1}};

        // cout<<(i+1)<<" "<<((i+1)%n) +1<<" "<<x<<endl;
    }

    sort(arr.begin(), arr.end());
    int pn=0;
    int totalCost=0;
    for(auto e: arr) cout<<e.ff<<" "; cout<<endl;

    for(auto e: arr){
        
        auto p= e.ss;
        // cout<<"timesFeed=> "<<timesFeed[p.ff]<<", "<<timesFeed[p.ss]<<"    ";
        if(timesFeed[p.ff]!=0 && timesFeed[p.ss]!=0 ) continue;
        
        if(timesFeed[p.ff]==0) pn++;
        timesFeed[p.ff]++;
        if(timesFeed[p.ss]==0) pn++;
        timesFeed[p.ss]++;

        //testing
        cout<<e.ff<<"    ";
        cout<<"now=> "<<timesFeed[p.ff]<<", "<<timesFeed[p.ss]<<"    ";
        cout<<"Feeded "<<p.ff<<" & "<<p.ss<<"   ";
        totalCost+= e.ff;
        cout<<pn<<" "<<totalCost<<endl;

        if(pn==n) break;
    }

    cout<<totalCost<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t=1;
    while(t--) {
        solve();
    }
    return 0;
}