#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

bool bruteforce(vector<int> &arr, int n){
    do {
        bool flag=false;
        int x=0;
        for(int i=1; i<=n; i++){
            if(arr[i-1]==i){
                flag=true;
                break;
            }
            x=x^(abs(arr[i]-i));
        }
        if(flag) continue;

        if(x==0){
            for(int x:arr){
                cout<<x<<" ";
            }
            cout<<endl;
            
        }
    } while (next_permutation(arr.begin(), arr.end()));

    return true;
}

void solve() {
    int n,k;
    cin>>n;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        arr[i]=i+1;
    }

    
    if(n%2==0){
        for(int i=0; i<n; i++){
            cout<<n-i<<" ";
        }
        cout<<endl;
    }else if(n<=3){
        cout<<-1<<endl;
        return;
    }else{
        vector<int> ofFive= {2,5,1,3,4};   

        for(int i=0; i<5; i++){
            arr[i]=ofFive[i];
        }
        for(int i=5; i<n; i++){
            arr[i]= n-(i-5);
        }

        for(int x:arr) cout<<x<<" ";
        cout<<endl;
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