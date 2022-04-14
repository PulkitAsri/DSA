#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<string> arr(n);
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        arr[i]=s;
    }

    //Check Rows
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int Wc=0;
            if(j+5 < n){
                for(int k=0; k<6; k++){
                    if(arr[i][j+k]=='.') Wc++;    
                }
                if(Wc<=2){
                    cout<<"Yes"<<endl;
                    return;
                } 
            }
        }
    }

    //check Columns
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j+5 < n){
                int Wc=0;
                for(int k=0; k<6; k++){
                    if(arr[j+k][i]=='.') Wc++;    
                }
                if(Wc<=2){
                    // cout<<i<<" "<<j;
                    cout<<"Yes"<<endl;
                    return;
                } 
            }
        }
    }

    // Check y = x  *One Diagonal
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int Wc=0;
            if(j+5 < n && i+5 <n){
                for(int k=0; k<6; k++){
                    if(arr[i+k][j+k]=='.') Wc++;    
                }
                if(Wc<=2){
                    cout<<"Yes"<<endl;
                    return;
                } 
            }
        }
    }

    // Check y =-x  *Second Diagonal
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            int Wc=0;
            if(j-5 >=0 && i+5 < n){
                for(int k=0; k<6; k++){
                    if(arr[i+k][j-k]=='.') Wc++;    
                }
                if(Wc<=2){
                    cout<<"Yes"<<endl;
                    return;
                } 
            }
        }
    } 

    cout<<"No"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--) {
        solve();
    // }
    return 0;
}