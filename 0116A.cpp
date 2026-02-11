#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,mbx=0,a,b,now=0;
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>a>>b;
      now=now-a+b;
      mbx=max(mbx,now);
   }
   cout<<mbx;
}
