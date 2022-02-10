#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

bool isPalindrome(string s){
    string p=s;
    reverse(p.begin(),p.end());
    return s==p;
}

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count=0;
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }

    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-1-i]) count++;
    }
    if(count<=k){
        k-=count;
        if(k%2==0 || (k%2==1 && n%2==1) ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }else cout<<"NO"<<endl;
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