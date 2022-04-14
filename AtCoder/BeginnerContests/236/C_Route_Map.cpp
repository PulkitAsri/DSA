#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
  int n,m;
  cin>>n>>m;
  vector<string> local(n);
  vector<string> express(n);
  
  for(int i=0; i<n; i++){
    cin>>local[i];
  }
  for(int i=0; i<m; i++){
    cin>>express[i];
  }
  
  int e=0;
  for(int i=0; i<n; i++){
    if(local[i]==express[e]){
      cout<<"Yes"<<endl;
      e++;
    }else{
      cout<<"No"<<endl;
    }
  }
  
  return 0;
}