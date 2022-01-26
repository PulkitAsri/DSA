#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t,n;
    cin>>t>>n;

    while(t--){
        vector<long long int> a;
        vector<long long int> b;
    
    
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
    
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                b.push_back(a[i]&a[j]);
            }
        }
    
        sort(b.begin(),b.end());
    
        while(b.size()>1){
            int x= b[b.size()-1]|b[b.size()-2];
    
            b.pop_back();
            b.pop_back();
    
            b.push_back(x);
        }
        
        cout<<b[0]<<endl;
        
    }

    return 0;
}
