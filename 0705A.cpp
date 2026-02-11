#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int k=n/2;
   if(n%2==0){
      for(int i=0;i<k-1;i++){
         cout<<"I hate that I love that ";
      }
      cout<<"I hate that I love it";
   }
   else{
      for(int i=0;i<k;i++){
         cout<<"I hate that I love that ";
      }
      cout<<"I hate it";
   }
}
