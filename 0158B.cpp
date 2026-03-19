#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> s(n),c(5);
   for(auto&k:s){cin>>k;c[k]++;}
   int ans=c[4];
   ans+=c[3];
   c[1]=max(0,c[1]-c[3]);
   ans+=c[2]/2;
   ans+=c[2]%2;
   c[1]=(c[2]%2)*max(0,c[1]-2)+((c[2]+1)%2)*c[1];
   ans+=(c[1]+3)/4;
   cout<<ans;
}
