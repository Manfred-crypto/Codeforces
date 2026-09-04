#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,c=0;long long t=0;
   cin>>n;
   vector<int> a(n);
   for(auto&m:a)cin>>m;
   for(int i=0;i<n;i++){
      t+=a[i];
      if(t<0&&a[i]==-1){c++; t=0;}
   }
   cout<<c;
}
