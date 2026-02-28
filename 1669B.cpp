#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a, int n){
   unordered_map<int, int>ioi;
   for(int i=0;i<n;i++){
      ioi[a[i]]++;
      if(ioi[a[i]]==3)return a[i];
   }
   return -1;
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      for(auto&k:a){cin>>k;}
      cout<<solve(a,n)<<endl;
   }
}
