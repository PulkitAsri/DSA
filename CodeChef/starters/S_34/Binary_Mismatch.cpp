#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;


bool expectedAns(string &s, int &n, int nZero, int nOne){
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(s[j]=='1'){
                nZero++;
                nOne--;
            }else{
                nZero--;
                nOne++;
            }

            if(nZero==nOne){
                cout<<i+1<<" "<<j+1<<endl;
                return true;
            }
        }
    }
    return false;
}


pair<int,int> subArraySum(vector<int> &arr, int n, int sum)
{
    unordered_map<int, int> map;
    int curr_sum = 0;
 
    for (int i = 0; i < n; i++){
        curr_sum = curr_sum + arr[i];
 
        if (curr_sum == sum)
        {
            return {0,i};
        }
 
        if (map.find(curr_sum - sum) != map.end())
        {
            return { map[curr_sum - sum] + 1, i};
        }

        map[curr_sum] = i;
    }
 
    return {-1,-1};
}



void solve() {
    int n,k;
    cin>>n;
    string s;
    cin>>s;

    vector<int> arr(n,0);
    int sum=0;

    if(n%2==1){
        cout<<"NO"<<endl;
        return ;
    }

    int nZero=0,nOne=0;
    for(int i=0; i<n; i++){
        char c=s[i];
        if(c=='1'){
            nOne++;
            arr[i]=1;
        }
        else {
            nZero++;
            arr[i]=-1;
        }
        sum+=arr[i];

    }

    if(nZero==nOne){
        cout<<"YES"<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }



    // cout<<(expectedAns(s,n,nZero,nOne)?"YES":"NO");

    auto p=subArraySum(arr,n, sum/2);
    if(p.first == -1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        cout<<(p.first+1)<<" "<<(p.second +1)<<endl;
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