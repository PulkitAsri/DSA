#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0; // For index of str1 (or subsequence
 
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}

void solve() {
    int n,m;
    cin>>n>>m;
    string s;
    string a;
    cin>>s>>a;

    if(isSubSequence(a,s,m,n)){
        cout<<-1<<endl;
        return;
    }

    int i = 0,j = 0;
    while(i<n && j<m){
        if(s[i]=='?') s[i]=char('a'+ (a[j]-'a' +1)%5);
        if(s[i]==a[j]) j++;
        i++;
    }

    cout<<s<<endl;
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