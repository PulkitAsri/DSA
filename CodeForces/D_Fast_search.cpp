#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// #define int long long int 
int64_t mod=1e9+7;
/*
 * Complete the 'removeIntegers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER N
 *  2. INTEGER P
 *  3. INTEGER Q
 *  4. INTEGER_ARRAY special_integers
 */
 
int binaryJustLesser(vector<int> &v, int lb ){
    int l=-1;
    int r =v.size();
    
    while(r-l >= 2){
        int mid=(l+r)/2;
        
        if(v[mid] > lb){
            r=mid;
        }else if(v[mid] <= lb){
            l=mid;
        }   
    }
    return l;   
}

int binaryJustGreater(vector<int> &v, int ub ){
    int l=-1;
    int r =v.size();
    
    while(r-l >= 2){
        int mid=(l+r)/2;
        
        if(v[mid] >= ub){
            r=mid;
        }else if(v[mid] < ub){
            l=mid;
        }
    }
    
    return r;   
}

int count(vector<int> &v,int l,int r){
    int b = binaryJustGreater(v,l);
    int a = binaryJustLesser(v,r);
    if(a == -1) return 0;
    else if (b == (int)v.size()) return 0;
    else return a-b +1;
}

int64_t solve(vector<int> &v, int64_t l, int64_t r, int64_t p, int64_t q){

    
    //base case
    if(l>r) return 0;

    int64_t c = count(v,l,r);
    int64_t length= r-l+1;
    
    if(c==0) return q;
    
    int64_t ans = length*c*p;
    if(length%2==0){
        int64_t mid=(l+r)>>1ll;
        int64_t ans1=solve(v,l,mid,p,q);
        int64_t ans2=solve(v,mid+1,r,p,q);
        
        ans= min(ans, ans1+ans2);
    }
    return ans;  
}



#define v(t) vector<t> 
#define all(e) e.begin(), e.end()

int removeIntegers(int N, int P, int Q, vector<int> si) {
    

    int64_t ans= solve(si,1,1ll<<(N),P,Q)%mod;
    return ans;
}
int32_t main(){
    int n;
    cin>>n;

    // "abcde"

    v(int) a(n);
    for(int &x: a){
        cin>>x;
    }   

    sort(all(a));
    int queries;
    cin>>queries;
    while(queries--){
        int l,r;
        cin>>l>>r;
        cout<<count(a,l,r)<<" ";
    }
}