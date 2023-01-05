#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"


using namespace std;
int hcf(int a, int b){
    return b == 0 ? a : hcf(b, a % b);   
}

void solve() {
    int n,k;
    cin>>n;
    int x= n/2;
    if(n%2==1){
        cout<<((x)*(n-x) - 1);
    }else{
        
        while(hcf(x, n-x)!=1){
            x--;
        }
        cout<<(x*(n-x) -1);
        
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