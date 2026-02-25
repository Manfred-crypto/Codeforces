#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;bool b=0;string s;
   cin>>n;
   if(n<26){cout<<"no";cin>>s;}
   else{
      cin>>s;
      for(int i=0;i<=25;i++){
         if(s.contains(65+i)||s.contains(97+i)){}
         else {b=1;break;}
      }
      if(b==1){cout<<"no";}else{cout<<"yes";}
   }
}
