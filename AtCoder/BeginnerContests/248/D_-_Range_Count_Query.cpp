#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int nextLess(vector<int> arr, int target, int end)
{
	if(end == 0) return -1;

	if (target >= arr[end - 1]) return end-1;

	int start = 0;

	int ans = -1;
	while (start <= end){
		int mid = (start + end) / 2;

		if (arr[mid] > target){
			end = mid - 1;
		}else{
			ans = mid;
			start = mid + 1;
		}
	}
	return ans;
}

int nextMore(vector<int> arr, int target, int end)
{
	int start = 0;

	int ans = -1;
	while (start <= end){
		int mid = (start + end) / 2;
		if (arr[mid] < target)
			start = mid + 1;

		else{
			ans = mid;
			end = mid - 1;
		}
	}

	return ans;
}


void solve() {
    int n,q;
    cin>>n;

    vector<int> arr(n,0);
    map<int,vector<int>> mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]].push_back(i+1);
    }

    // //testing 
    // for(auto &p:mp){
    //     cout<<p.first<<"->  ";
    //     for(int i=0; i<p.second.size(); i++){
    //         cout<<p.second[i]<<" ";
    //     }
    //     cout<<endl<<endl;
    // }

    cin>>q;

    while(q--){
        int l,r,x;
        cin>>l>>r>>x;

        int nFreq=mp[x].size();

        if(nFreq==0){
            cout<<0<<endl;
            continue;
        }

        int f=-1,g=-1;
        // f= nextMore(mp[x],l,nFreq);
        // g= nextLess(mp[x],r,nFreq);


        // cout<<x<<"("<<nFreq<<")"<<"->"<<f<<" "<<g<<" ";  
        int left = lower_bound(mp[x].begin(), mp[x].end(),l) - mp[x].begin();
        int right = upper_bound(mp[x].begin(),mp[x].end(),r) - mp[x].begin();
        // for(int i:f[x]) cout<<i<<" "; cout<<endl;
        // cout<<left<<" "<<right<<endl;
        cout<<right-left<<endl; 
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}