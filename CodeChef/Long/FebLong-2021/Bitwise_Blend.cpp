#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;
bool checkAlternate(vector<int> arr,int n){
    bool ans=true;
    for(int i=0; i<n-1; i++){
        ans&=(arr[i]&1)^(arr[i+1]&1);
    }
    return ans;
}

void solve() {
    int n,k;
    cin>>n;
    vector<pair<int,int> > ans1;
    vector<pair<int,int> > ans2;

    vector<int> arr(n,0);
    vector<int> rem(2,0);

    int oddNoIdx=-1;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        rem[arr[i]%2]++;
        if(arr[i]%2==1) oddNoIdx=i;

    }
    int count1=0;
    int count2=0;

    if(rem[1]==0){
        bool alt=checkAlternate(arr,n);
        if(alt){
            cout<<0<<endl;
        }else cout<<-1<<endl;
        return;
    }

    int o1=oddNoIdx;
    int o2=oddNoIdx;

    //first odd(count1)
    for(int i=0; i<n; i++){
        //if 0 2 4 6 8 
        if(i%2==0){
            // ....is odd ->continue
            //else if even
            if(arr[i]%2==0){
                ans1.push_back(make_pair(i+1,o1+1));
                o1=i;
                count1++;
            }else{
                o1=i;
            }
        }else{
            //if 1 3 5 7
            if(arr[i]%2==1){
                ans1.push_back(make_pair(i+1,o1+1));
                count1++;
            }
        }
    }

    //first even
    // if( already even ....or odds>=2)

    if((arr[0]%2==0 && rem[1]>=1) 
    || (arr[0]%2==1 && rem[1]>=2)){

        for(int i=0; i<n; i++){
            //if 0 2 4 6 8 
            if(i%2==0){
                // ....is even ->continue
                //else if odd
                if(arr[i]%2==1){
                    ans2.push_back(make_pair(i+1,o2+1));
                    count2++;
                }
            }else{
                //if 1 3 5 7
                if(arr[i]%2==0){
                    ans2.push_back(make_pair(i+1,o2+1));
                    o2=i;
                    count2++;
                }else{
                    o2=i;
                }
            }
        }
    }else{
        count2=INT_MAX;
    }

    //OUTPUT
    if(count1 < count2){
        cout<<count1<<endl;
        for(int i=0; i<ans1.size(); i++){
            cout<<ans1[i].first<<" "<<ans1[i].second<<endl;
        }
            
    }else{
        cout<<count2<<endl;
        for(int i=0; i<ans2.size(); i++){
            cout<<ans2[i].first<<" "<<ans2[i].second<<endl;
        }
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