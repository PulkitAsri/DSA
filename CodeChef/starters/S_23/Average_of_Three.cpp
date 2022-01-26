#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int x;
	    cin>>x;
	    bool flag=false;
	    
	    for(int i=1; i<=1000; i++){
	        if(flag) break;
	        for(int j=i+1; j<=1000; j++){
	            if(flag) break;
	            for(int k=j+1; k<=1000; k++){
	                if((i+j+k)/3.0==x){
	                    cout<<i<<" "<<j<<" "<<k<<endl;
	                    flag=true;
	                    break;
	                }
	            }
	        }
	    }
	    
	}
	return 0;
}
