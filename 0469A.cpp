#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   bool b=1;
   cin>>n;
   vector<bool> hash(n);
   int x,k;
   cin>>x;
   for(int i=0;i<x;i++){
      cin>>k;
      hash[k-1]=1;
   }
   cin>>x;
   for(int i=0;i<x;i++){
      cin>>k;
      hash[k-1]=1;
   }
   for(int i=0;i<n;i++){
      if(hash[i]==0){b=0;break;}
   }
   if(b==1){cout<<"I become the guy.";}else{cout<<"Oh, my keyboard!";}
}
