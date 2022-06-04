#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {

    const int N = 10000000;
    vector<int> lp(N+1);
    vector<int> pr;

    for (int i=2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j=0; j < (int)pr.size() && pr[j] <= lp[i] && i*pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
        }
    }


    int n,k;
    cin>>n;


    cout<<endl;
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