#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,a;bool b=1;
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>a;      
      if(a==1){b=0;break;}
   }
   if(b==1){cout<<"easy";}else{cout<<"hard";}
}
