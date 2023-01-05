#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int l,r;
    cin>>l>>r;

    if(l<=2 and r>=5){
        cout<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
        return;
    }
    //should follow y= 4x+2 , 3, 4 ,5 formula 
    int x= (l-2)/2;
    if(((l-2)%2!=0)) x++; 

    if( r >= (2*x + 5)){
        cout<<(2*x + 2)<<" "<<(2*x + 3)<<" "<<(2*x + 4)<<" "<<(2*x + 5)<<endl;
    }else cout<<-1<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // for(int i=0; i<100 ;i++){
    //     cout<<((4*i +2)^(4*i +3)^(4*i +4)^(4*i +5));
    // }
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}