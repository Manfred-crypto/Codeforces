#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,h;
   cin>>n>>h;
   int t=n;
   int i,k=0;
   while(t--){cin>>i;if(i>h)k++;}
   cout<<n+k;
}
