#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>
#define ff first
#define ss second

#define int long long
#define endl "\n"

using namespace std;

int ith(int t){
    return (t%10)+1;
}

bool sortcol0(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[0] < v2.ff[0];
}
bool sortcol1(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[1] < v2.ff[1];
}
bool sortcol2(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[2] < v2.ff[2];
}
bool sortcol3(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[3] < v2.ff[3];
}
bool sortcol4(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[4] < v2.ff[4];
}
bool sortcol5(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[5] < v2.ff[5];
}
bool sortcol6(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[6] < v2.ff[6];
}
bool sortcol7(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[7] < v2.ff[7];
}
bool sortcol8(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[8] < v2.ff[8];
}
bool sortcol9(const pair<vector<int>,string>& v1, const pair<vector<int>,string>& v2){
    return v1.ff[9] < v2.ff[9];
}


void solve() {
    int n,k;
    cin>>n;

    vector<string> arr(n+1);

    vector<pair<vector<int>,string>> indexes(n+1,{vector<int>(10,-1),""});

    for(int i=1; i<=n; i++){
        cin>>arr[i];
        for(int j=0; j<10; j++){
            char c= arr[i][j];
            indexes[i].ff[c-'0']=j;
            indexes[i].ss=arr[i];
        }
    }

    

    int ans=INT64_MAX;
    for(int i=0; i<=9; i++){
        //try to make all 

        switch(i){
            case 0:
                sort(indexes.begin(),indexes.end(),sortcol0);
                break;
            case 1:
                sort(indexes.begin(),indexes.end(),sortcol1);
                break;
            case 2:
                sort(indexes.begin(),indexes.end(),sortcol2);
                break;
            case 3:
                sort(indexes.begin(),indexes.end(),sortcol3);
                break;
            case 4:
                sort(indexes.begin(),indexes.end(),sortcol4);
                break;
            case 5:
                sort(indexes.begin(),indexes.end(),sortcol5);
                break;
            case 6:
                sort(indexes.begin(),indexes.end(),sortcol6);
                break;
            case 7:
                sort(indexes.begin(),indexes.end(),sortcol7);
                break;
            case 8:
                sort(indexes.begin(),indexes.end(),sortcol8);
                break;
            case 9:
                sort(indexes.begin(),indexes.end(),sortcol9);
                break;
            
        }
        
        int hmmm=0;
        int prev=-1;
        int prevHm=-1;
        for(int j=1; j<=n; j++){
            int idx=indexes[j].ff[i];
            // cout<<idx<<" ";
            // hmmm+= idx;
            if(idx==prev){
                hmmm+=10;
                // cout<<"hehe";
            }
            else {
                if(prev==-1) hmmm+= idx;
                else hmmm+= idx - prev; 
            }

            prev=idx;
            
            // if(i==8) cout<<(indexes[j].ss)<<" "<<hmmm<<" "<<prev<<endl;
        }

        // cout<<endl;

        ans=min(hmmm,ans);
    }

    cout<<ans<<endl;
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