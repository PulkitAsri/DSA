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
    string s;
    cin>>n>>k;
    cin>>s;
    bool preFlag=true;

    vector<int> nums(n,0);
    

    for(int i=0;i<n;i++){
        int x=s[i]-'0';
        nums[i]=x;
    }
    int initialCount=0;
    for(int i=0;i<n;i++){
        int x=nums[i];
        if(x==0) initialCount++;
        else break;
    }

    int totalCount=0;
    int count=0;
    bool flag=true;
    int moves=0;
    int ascStart=initialCount;
    int ascEnd=initialCount;

    int changes=(initialCount==0)?(10-nums[0])%10: 10;
    if(changes > k){
        cout<<initialCount<<endl;
        return;
    }
    for(int i=initialCount+1; i<n; i++ ){
        
        if(nums[i-1]<= nums[i] && nums[i-1]!=0){
            ascEnd++;
        }else if(nums[i]==0){
            ascEnd++;
        }else{
            if(moves+changes<= k ){
                count+=ascEnd-ascStart+1;
                moves+=changes;
            }else{
                break;
            }

            ascStart=i;
            ascEnd=i;
            changes=10;  
        }
    }
    if(moves+changes <= k){
        count+=(initialCount==n)?0:(ascEnd-ascStart+1);
        moves+=changes;
    }

    cout<<count+initialCount<<endl;
    
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