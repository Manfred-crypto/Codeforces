#include<bits/stdc++.h>
using namespace std;
int main(){
   int N;
   cin>>N;
   int i,a,b,c,d;
   for(i=0;i<N;i++){
      cin>>a>>b>>c>>d;
      if(a==b and b==c and c==d){
         cout<<"yes"<<endl;
      }
      else{
         cout<<"No"<<endl;
      }
   }
}
