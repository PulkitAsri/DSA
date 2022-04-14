#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve(int t) {
    
    vector<vector<int> > inks(3,vector<int> (4,0));
    for(int i=0;i<3; i++ ){
        for(int j=0; j<4; j++){
            cin>>inks[i][j];
        }
    }
    cout<<"Case #"<<t<<": ";

    vector<int> maxCMYK(4,0);
    int sum=0;
    for(int i=0; i<4; i++){
        int m=INT_MAX;
        for(int j=0; j<3; j++){
            m=min(m,inks[j][i]);
        }
        maxCMYK[i]=m;
        sum+=m;
    }
    if(sum<1e6){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }

    int total=1e6;
    for(int i=0; i<4; i++){
        // total= min(maxCMYK[i]+total, 1000000ll);
        // maxCMYK[i]= max(total-maxCMYK[i], 0ll);
        total-=maxCMYK[i];
        if(total<0){
            maxCMYK[i]+=total;
            total=0;
        }
        cout<<maxCMYK[i]<<" ";
    }

    cout<<endl;
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