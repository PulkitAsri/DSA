#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n,k=0;
    vector<pair<int,int> > ans;

    string s;
    cin>>n>>s;

    if(s[0]=='1'){
        k++;
        ans.push_back(make_pair(1,1));
    }

    int st=1;
    for(int i=1; i < n-1; i++){
        if(s[i]==s[i+1]){
            continue;
        }else{
            ans.push_back(make_pair(st,i+1));
            k++;
        }
    }

    if(s[n-1]=='0'){
        k++;
        ans.push_back(make_pair(1,n));
    }

    cout<<k<<endl;
    for(int i=0; i<k; i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }

    
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