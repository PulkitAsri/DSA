#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

bool isOne(string &s, int n, int k){
    int x=0;
    int nK=0;

    for(char c:s){
        if(nK < k-1){
            if(c=='1'){
                nK++;
            }
        }else{
            nK++;
            x= x^(c-'0');
        }
    }
    // cout<<(x==1) <<" "<<( nK >= k)<<endl;
    return (x==1 && nK>=k);
}

bool isZero(string &s, int n, int k){
    int x=0; 
    int nK=0;

    for(char c:s){
        if(nK < k-1){
            x= x^(c-'0');
            if(x==0){
                nK++;
            }
        }else{
            x= x^(c-'0');
            nK++;
        }
    }
    // cout<<(x==0) <<" "<<( nK>=k)<<endl;
    return x==0 && nK>=k;
}
void solve() {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    // cout<< isOne(s,n,k) <<" "<< isZero(s,n,k)<<endl;

    if(isOne(s,n,k) or isZero(s,n,k)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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