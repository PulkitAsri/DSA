#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        int n,x;
        string s;
        cin>>n>>x;
        cin>>s;
        
        int buffer=0,prev=0;
        int b=0,p=0;
        int maxH=0;
        int m=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                buffer++;
                prev++;
                
            }else if(s[i]=='1'){
                if(prev > maxH && (prev/x > ((prev-buffer-1)/x) + buffer/x)){
                    m=b;
                    maxH=prev;
                }
                p=b;
                b=i;
                prev=buffer+1;
                buffer=0;
            }
            // cout<<buffer<<" "<<prev<<"=>"<<maxH<<"@ ";
            // cout<<b<<" "<<p<<" "<<m<<endl;
        }
        if(prev > maxH && (prev/x > ((prev-buffer-1)/x) + buffer/x)){
            m=b;
            maxH=prev;
        }
        // cout<<buffer<<" "<<prev<<"=>"<<maxH<<"@ ";
        // cout<<b<<" "<<p<<" "<<m<<endl;
        
        // cout<<maxH<<" "<<m<<endl;
        
        s[m]='0';
        buffer=0;
        
        // cout<<s<<endl;
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                buffer++;
            }else if(s[i]=='1'){
                ans+=(buffer/x);
                buffer=0;
            }
        }
        ans+=(buffer/x);
        
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}

