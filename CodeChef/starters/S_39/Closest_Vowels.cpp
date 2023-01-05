#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

int mod=1e9 +7;
using namespace std;

void solve() {
    int n,k;
    cin>>n;
    string s;
    cin>>s;
    

    int result=1;

    char vowels[]= {'a','e','i','o','u'};
    vector<int> diff(5,-1);
    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        int mi=INT64_MAX;
        int count=1;
        for(int j=0; j<5; j++){
            diff[j]= abs(s[i] - vowels[j]);
            if(diff[j]==mi ){
                count++;
            }else if(diff[j] < mi){
                mi=min(mi, diff[j]);
                count=1;
            }
            // cout<<diff[j]<<" "<<count<<",   ";
        }
        // cout<<endl<<count<<endl;
        result*=count;
        result%=mod;
        
    }
    // cout<<endl;

    cout<<result%mod<<endl;
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