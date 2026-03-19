#include<bits/stdc++.h>
using namespace std;
int main(){
   int s,n;
   cin>>s>>n;
   bool b=1;
   vector<pair<int,int>> xy(n);
   for(int i=0;i<n;i++){int x,y;cin>>x>>y;xy[i]=make_pair(x,y);}
   sort(xy.begin(),xy.end());
   for(int i=0;i<n;i++){
      if(s>xy[i].first){s+=xy[i].second;}else{b=0;break;}
   }
   if(b)cout<<"YES"; else cout<<"NO";
}
