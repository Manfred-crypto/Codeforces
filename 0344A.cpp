#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,ans=0; string s;
   cin>>n;
   vector<string> v(n);
   for(int i=0;i<n;i++){
      cin>>s;
      v[i]=s;
   }
   for(int i=1;i<n;i++){
      if(v[i-1][1]==v[i][0]){ans++;}
   }
   cout<<ans+1;
}
