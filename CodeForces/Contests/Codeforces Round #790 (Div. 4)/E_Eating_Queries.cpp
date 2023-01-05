#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int binarySearchJustGreaterEqual(vector<int> &arr, int target, int end){

	int start = 0;
	int ans = -1;
	while (start <= end){
		int mid = (start + end) / 2;

		if (arr[mid] < target)
			start = mid + 1;

		// Move left side.
		else{
			ans = mid;
			end = mid - 1;
		}
	}

	return ans;
}
void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //decreasing order coz min candies required
    sort(arr.begin(), arr.end()); //nlog(n)
    reverse(arr.begin(),arr.end()); //n

    //prefix //n
    for(int i=1; i<n; i++){
        arr[i]=arr[i]+arr[i-1];
    }

    // for(int i=0; i<n; i++) cout<<arr[i]<<" "; cout<<endl;

    //now k queries q*log(n)
    for(int q=0; q<k; q++){
        int Q;
        cin>>Q;
        if(Q > arr[n-1]){
            cout<<-1<<endl;
            continue;
        }else if(Q < arr[0]){
            cout<<1<<endl;
            continue;
        }

        int ans=binarySearchJustGreaterEqual(arr,Q, n);
        cout<<ans+1<<endl;
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