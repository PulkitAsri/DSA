#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int countDigits(int x){
    int count=0;
    if(x==0) return 1;
    while(x>0){
        count++;
        x/=10;
    }
    return count;
}
vector<int> allNums(int x){
    vector<int> ans;
    while(x>0){
        ans.push_back(x%10);
        x/=10;
    }
    return ans;
}


int func()

void solve() {
    int n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;

    map<int,int> countMap;
    map<int,vector<int> > numsMap;
    vector<int> freq(10,0);

    for(int i=0;i<10;i++){
        int y=i*k;
        countMap[i]=countDigits(y);
        numsMap[i]=allNums(y);
    }

    int ans=0;

    



    for(int i=0; i<m; i++){
        //do something constant here
        

    }



    


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