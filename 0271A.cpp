#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;string s;bool b;
   cin>>n;
   k=n+1;
   while(k!=0){
      s=to_string(k);b=0;
      sort(s.begin(),s.end());
      for(int i=0;i<s.length()-1;i++){
         if(s[i]==s[i+1]){b=1;break;}
      }
      if(b==0)break;
      k++;
   }
   cout<<k;
}
