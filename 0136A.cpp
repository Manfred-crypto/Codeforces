#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin>>n;
   vector<int> f(n);
   for(int i=0;i<n;i++){
      cin>>k;
      f[k-1]=i+1;
   }
   for(auto&c:f){cout<<c<<" ";}
}
