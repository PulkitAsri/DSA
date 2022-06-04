#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;



void solve() {
    int n,k,a,b;
    cin>>n>>a>>b;
    int x=n*a;
    int y=n*b;
    vector<vector<char>> grid( 1000 , vector<char> (1000, '.'));

    bool isWhite=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            for(int k=0; k<a; k++){
                for(int l=0; l<b; l++){
                    grid[i*a + k][j*b + l]= isWhite?'.':'#';
                }
            }

            isWhite=!isWhite;
        }
        if(i%2==1){
            isWhite=true;
        }else isWhite=false;
    }

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}