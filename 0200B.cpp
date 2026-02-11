#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<double>v(n);
   for(auto&c:v)cin>>c;
   cout<<(double)accumulate(v.begin(),v.end(),0)/n;
}
