#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
  int n,ans=0;
  cin>>n;
  vector<int> all_cards(n+1,0);
  
  for(int i=0; i< 4*n-1; i++){
    int x;
    cin>>x;
    all_cards[x]++;
  }
  
  for(int i=1; i<=n; i++){
    if(all_cards[i]==3){
      ans=i;
      break;
    }
  }
  
  cout<<ans;
  return 0;
}