#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,q,N;
   string s,t;
   cin>>q;
   for(i=0;i<q;i++){
      cin>>N>>s>>t;
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      if(s==t){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
}
