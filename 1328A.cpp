#include<bits/stdc++.h>
using namespace std;
void skiss(){
   int a,b;
   cin>>a>>b;
   cout<<((a/b+1)*b-a)%b<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
      skiss();
   }
}
