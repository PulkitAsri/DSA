#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve(int t) {
    int R,C;
    cin>>R>>C;
    cout<<"Case #"<<t<<":"<<endl;
    // vector<int> arr(n,0);
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(i==0 && j==0){
                cout<<"..";
            }else{
                cout<<"+-";
            }
        }
        cout<<"+"<<endl;
        for(int j=0; j<C; j++){
            if(i==0 && j==0){
                cout<<"..";
            }else{
                cout<<"|.";
            }
        }
        cout<<"|"<<endl;
    }
    for(int j=0; j<C; j++){
        cout<<"+-";
    }
    cout<<"+"<<endl;
        

    
    // cout<<endl;
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