#include <bits/stdc++.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <math.h>

#define int long long
#define endl "\n"

using namespace std;

int countDigits(int x){
    int count=0;
    while(x>0){
        count++;
        x/=10;
    }
    return count;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int MOD=998244353;

    int n;
    cin>>n;
    int count=countDigits(n);
    int sum=0;
    // cout<<count<<endl;
    vector<int> sample(count+1,0);
    for(int i=1;i<count;i++){
        int x= pow(10,i) - pow(10,i-1);
        if(x%2==0){
            sample[i]= (((x/2)%MOD)*((x+1)%MOD))%MOD;
        }else{
            sample[i]= ((x%MOD)*(((x+1)/2)%MOD))%MOD;

        }
        // cout<<x<<" "<<sample[i]<<endl;
        sum=(sum + sample[i])%MOD;
        
    }



    int y= n - (pow(10,count-1)-1);
    if(y%2==0){
            sum=sum+(((y/2)%MOD)*((y+1)%MOD))%MOD;
        }else{
            sum=sum+((y%MOD)*(((y+1)/2)%MOD))%MOD;

        }
    // sum=sum+ (((y/2)%MOD)*((y+1)%MOD))%MOD;
    cout<<sum%MOD;
    
}