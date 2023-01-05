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

    vector<int> arr(n,0);
    map<int, int> freq;
    int mi=INT_MAX;
    int mx=INT_MIN;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        mi=min(mi,arr[i]);
        mx= max(mx,arr[i]);
        freq[arr[i]]++;
    }
    sort(arr.begin(),arr.end());

    pair<int,int> ans={-1,-1};
    int maxLen=0;
    int len=0;
    int st=-1;
    int en=-1;
    bool started=false;

    int prev=-1;
    for(auto p: freq){
        int a=p.first;
        int b=p.second;

        if((a-prev)!=1){
            if(len > maxLen){
                ans={st,en};
                maxLen=len;
                // cout<<"{"<<ans.first<<", "<<ans.second<<"}"<<endl;
            }
            st=-1;
            en=-1;
            started=false;
            len=0;
        }

        if(b < k){
            if(len > maxLen){
                ans={st,en};
                maxLen=len;
                // cout<<"{"<<ans.first<<", "<<ans.second<<"}"<<endl;
            }
            st=-1;
            en=-1;
            started=false;
            len=0;
        }else{
            if(!started){
                st=a;
                en=a;
                started=true;
            }else{
                en=a;
            }
            len++;
        }
        prev=a;
        
        // cout<<i<<": "<<len<<" "<<maxLen<<" {"<<st<<" "<<en<<"} "<<started<<endl;
        
    }
    if(len > maxLen){
        ans={st,en};
    }
    if(ans.first==-1) cout<<-1<<endl;
    else cout<<ans.first<<" "<<ans.second<<endl;
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