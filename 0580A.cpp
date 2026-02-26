#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,cont=1,ans=1;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
      cin>>v[i];
      if(i!=0){
         if(v[i]>=v[i-1]){cont++;ans=max(cont,ans);}else cont=1;
      }
   }
   cout<<ans;
}
