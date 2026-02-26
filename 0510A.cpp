#include<bits/stdc++.h>
using namespace std;
void solve(int n,int m){
   if(n==1){
      for(int i=0;i<m;i++){cout<<"#";}
      cout<<endl;
   }
   if(n==3){
      for(int i=0;i<m;i++){cout<<"#";}
      cout<<endl;
      for(int i=0;i<m-1;i++){cout<<".";}
      cout<<"#"<<endl;
      for(int i=0;i<m;i++){cout<<"#";}
      cout<<endl;
   }
   if(n>4){
      for(int i=0;i<m;i++){cout<<"#";}
      cout<<endl;
      for(int i=0;i<m-1;i++){cout<<".";}
      cout<<"#"<<endl;
      for(int i=0;i<m;i++){cout<<"#";}
      cout<<endl<<"#";
      for(int i=0;i<m-1;i++){cout<<".";}
      cout<<endl;
      solve(n-4,m);
   }
}
int main(){
   int n,m;
   cin>>n>>m;
   solve(n,m);
}
