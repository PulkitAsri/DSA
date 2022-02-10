#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int a,b;
  string str;
  cin>>str>>a>>b;
  a--;
  b--;
  
  char temp=str[a];
  str[a]=str[b];
  str[b]=temp;
  
  cout<<str;
  return 0;
}