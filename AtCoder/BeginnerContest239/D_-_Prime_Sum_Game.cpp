#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;


bool isPrime(int n){
    if(n<=1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
  
    return true;
}

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    bool a1=false,b1=false,c1=false,d1=false;

    for(int i=a; i<=b;i++){
        bool all=true;
        for(int j=c; j<=d; j++){
            all = all && !isPrime(i+j);
        }
        if(all){
            // cout<<i<<endl;
            cout<<"Takahashi"<<endl;
            return;
        } 
    }
    cout<<"Aoki"<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}