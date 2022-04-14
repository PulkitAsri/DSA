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
    cin>>n;
    string s;
    cin>>s;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        arr[i]=i;
    }

    // if any other number except 0 appears 
    // it would have a mex=0
    if(s[0]=='0'){
        if(n!=1) {
            cout<<"No"<<endl;
            return;
        } else{
            cout<<"Yes"<<endl;
            cout<<0<<endl;
            return;
        }
    }
    else if(s[1]=='0'){
        cout<<"No"<<endl;
        return;
    }

    // anyp perm of 0 to n-1 will have arr itleast  
    // having all numbers from 0 to n-1 to mx=n
    if(s[n]=='0'){
        cout<<"No"<<endl;
        return;
    }else{
        cout<<"Yes"<<endl;
    }

    // coming to actual permutation
    for(int i=1; i<=n; i++ ){
        char c= s[i];
        if(c=='0'){
            swap(arr[i],arr[i-1]);
        }
    }

    // Printing
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
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