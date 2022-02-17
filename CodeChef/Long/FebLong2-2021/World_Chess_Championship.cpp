#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int x;
    string s;
    cin>>x>>s;
    int ans=-1;
    int carlScore=0;
    int chefScore=0;
    
    for(int i=0; i<14; i++){
        char c=s[i];
        if(c=='C'){
            carlScore+=2;
        }else if(c=='N'){
            chefScore+=2;
        }else{
            carlScore++;
            chefScore++;
        }
    }

    if(chefScore > carlScore){
        cout<<(40*x)<<endl;
    }else if(carlScore > chefScore){
        cout<<(60*x)<<endl;
    }else{
        cout<<(55*x)<<endl;
    }
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