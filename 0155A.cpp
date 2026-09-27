#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int t;
   cin>>t;
   int maxi=t,mini=t,k=0;
   for(int i=1;i<n;i++){
      cin>>t;
      if(t>maxi){k++;maxi=max(maxi,t);continue;}
      if(t<mini){k++;mini=min(mini,t);continue;}
   }
   cout<<k;
}
