#include <iostream>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x>k){
            cout<<-1<<endl;
            
            continue;
        }
        
        int itr=0;
        while(itr < n){
            int i=0;
            while(i<=k && itr < n){
                if(i==x){
                    i++;
                    continue;
                }else{
                    cout<<i<<" ";
                    i++;
                    itr++;
                }
                
            }
        }
        cout<<endl;
    }
	return 0;
}
