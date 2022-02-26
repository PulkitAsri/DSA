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

    stack<pair<int,int> > s;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        if(s.empty()){
            s.push(make_pair(x,1));
        }else if(x== s.top().first){
            s.push(make_pair(x,s.top().second+1));
        }else{
            s.push(make_pair(x,1));
        }

        // if(first==second [==n]) pop n times;

        if(s.top().second == s.top().first){
            for(int j=0;j<x;j++) s.pop();
        } 
        cout<<s.size()<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}