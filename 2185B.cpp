#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,n;
   cin>>t;
   while(t--){
      cin>>n;
      vector<int> v(n);
      for(auto&k:v){cin>>k;}
      cout<<n**max_element(v.begin(),v.end())<<endl;
   }
}
