#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(auto&c:a)cin>>c;
   auto miin=min_element(a.rbegin(), a.rend());
   auto maax=max_element(a.begin(), a.end());
   auto mini=n-1-distance(a.rbegin(),miin);
   auto maxi=distance(a.begin(),maax);
   cout<<maxi+n-1-mini-(mini<maxi?1:0);
}
