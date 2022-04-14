// #include <bits/stdc++.h>
//#include <algorithm>
#include <vector>
//#include <string>
#include <math.h>
#include <iostream>

#define int long long
#define endl "\n"

using namespace std;

void solve(int t) {
    int n,k;
    cin>>n;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //testing
    for(int &x: arr){
        cout<<x<<endl;
    }

    cout<<"Case #"<<t<<": ";

    sort(arr.begin(),arr.end());
    int count=0,x=1;
    for(int i=0;i<n;i++){
        // cout<<arr[i]<<" "<<x<<endl;
        if(arr[i] >= x){
            count++;
            x++;
        }
    }

    cout<<x-1<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int i=t;
    while(i--) {
        solve(t-(i));
    }
    return 0;
}



// 4 4 4 5 6 7 7 7 10 10  

  