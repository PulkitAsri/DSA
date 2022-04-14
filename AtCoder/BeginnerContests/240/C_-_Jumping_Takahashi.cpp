#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void recurr(vector<pair<int,int> > &pairs, int idx, int &sum ){

    sum+=pairs[idx].first;
    recurr(pairs,idx+1,sum);
    sum-=pairs[idx].first;
    sum+=pairs[idx].second;
    recurr(pairs,idx+1,sum);

}


int dp[101][10000001];
void solve() {
    int n,x;
    cin>>n>>x;

    vector<pair<int,int> > pairs;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        pairs.push_back(make_pair(a,b));
    }
    
    int sum=0;
    recurr(pairs, 0, sum );


    vector<int> allPoss;
    
    cout<<"hahahah"<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}