#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int dx[]={2,2,1,1,-1,-1,-2,-2};
    int dy[]={1,-1,2,-2,2,-2,1,-1};

    //find if any common lattice points 
    set<pair<int,int> > moves1;
    for(int i=0; i<8; i++){
        moves1.insert(make_pair(x1+dx[i],y1+dy[i]));
    }
    for(int i=0; i<8; i++){
        if(moves1.count(make_pair(x2+dx[i],y2+dy[i]))!=0){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}