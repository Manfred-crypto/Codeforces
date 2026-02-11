#include<bits/stdc++.h>
using namespace std;
int solve(){
   string s;
   cin>>s;
   if(s[0]==84)return 4;
   if(s[0]==67)return 6;
   if(s[0]==79)return 8;
   if(s[0]==68)return 12;
   if(s[0]==73)return 20;
}
int main(){
   int k,ans=0;
   cin>>k;
   while(k--){
      ans+=solve();
   }
   cout<<ans;
}
