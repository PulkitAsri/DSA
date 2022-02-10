#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;
bool isPalindrome(string S)
{      
    string P = S;
    reverse(P.begin(), P.end());
    return S==P;
}

int findMaxAndUpdate(vector<int> freq,int &mx){
    mx=INT_MIN;
    int c=0;
    for(int i=0;i<26;i++){
        if(freq[i]>mx){
            mx=freq[i];
            c=i;
        }
    }
    return c;
}

void solve() {
    int n;
    string s;
    cin>>n>>s;

    if(n%2==1){
        cout<<"NO"<<endl;
        return;
    }

    vector<int> freq(26,0);
    string sCopy=s;

    for(int i=0; i<n; i++){
        freq[s[i]-'a']++;
    }

    bool flag=false;
    for(int i=0;i<26;i++){
        if(freq[i]> n/2){ 
            flag=true;
            break;
        }
    }

    if(flag){
        cout<<"NO"<<endl;
    }else{
        int c=0;
        int itr=0;
        int mx=INT_MIN;
        c=findMaxAndUpdate(freq,mx);
        bool swi=false;

        int st=0;
        int end=n-2;
        
        while(itr<n){
            if(freq[c]==0){
                c=findMaxAndUpdate(freq,mx);
            }else{
                if(!swi){
                    sCopy[st]=(char)(c+'a');
                    st+=2;
                }else{
                    sCopy[end]=(char)(c+'a');
                    end-=2;
                }
                freq[c]--;
                itr++;
                if(freq[c]==0){
                    swi=!swi;
                }
            }
        }
        if(isPalindrome(sCopy)){
            cout<<"NO"<<endl;
            return;
        }else{
            cout<<"YES"<<endl;
            cout<<sCopy<<endl;
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