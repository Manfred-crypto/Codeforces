#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,ans=1,sum=0;
   cin>>n;
   vector<int> v(n);
   for(auto&c:v){cin>>c;}
   sort(v.rbegin(),v.rend());
   int total=accumulate(v.begin(),v.end(),0);
   for(int i=0;i<n;i++){
      sum+=v[i];
      if(2*sum>total){cout<<ans;break;}
      ans++;
   }
}
