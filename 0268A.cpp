#include<bits/stdc++.h>
using namespace std;
int main(){
   int ans=0,n=0;
   cin>>n;
   vector<int> host(n),guest(n);
   for(int i=0;i<n;i++){
      cin>>host[i]>>guest[i];
      for(int j=0;j<i;j++){
         ans+=(host[i]==guest[j]);
         ans+=(host[j]==guest[i]);
      }
   }
   cout<<ans;
}
