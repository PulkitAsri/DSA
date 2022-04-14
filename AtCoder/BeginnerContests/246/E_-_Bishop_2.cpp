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
    vector<int> startPos(2,0);
    vector<int> endPos(2,0);

    cin>>startPos[0]>>startPos[1];
    cin>>endPos[0]>>endPos[1];

    bool parityStart=!((startPos[0]%2) xor (startPos[1]%2));
    bool parityEnd=!((endPos[0]%2) xor (endPos[1]%2));

    if(parityEnd!=parityStart){
        cout<<-1<<endl;
        return;
    }

    


    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        arr[i]=i;
    }

    cout<<endl;
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