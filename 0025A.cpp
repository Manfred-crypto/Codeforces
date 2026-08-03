#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,a,b,c;
   cin>>n>>a>>b>>c;
   int majity=((a%2==0)+(b%2==0)+(c%2==0)>=2?0:1);
   if(a%2!=majity){cout<<1;return 0;}
   if(b%2!=majity){cout<<2;return 0;}
   if(c%2!=majity){cout<<3;return 0;}
   for(int i=4;i<=n;i++){
      int m;
      cin>>m;
      if(m%2!=majity){cout<<i;break;}
   }
}
