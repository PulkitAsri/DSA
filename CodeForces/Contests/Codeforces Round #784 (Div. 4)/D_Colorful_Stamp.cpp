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
    cin>>n>>s;
    if(n==1){
        if(s=="W"){
            cout<<"YES"<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
        
    }
    string temp="";
    vector<string> sections;

    for(int i=0; i<n; i++){
        if(s[i]=='W' and temp!=""){
            sections.push_back(temp);
            temp="";
        }else if(s[i]!='W'){
            temp+=s[i];
        }
    }

    if(temp!="") sections.push_back(temp);

    for(string &section: sections){
        // cout<<section<<",";
        if(section.length()==1){
            cout<<"NO"<<endl;
            return;
        }else{
            int b=0;
            int r=0;
            for(char &c: section){
                if(c=='R') r++;
                if(c=='B') b++;
            }
            if(r==0 or b==0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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