#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> vec(n);
   for(auto&c:vec){cin>>c;}
   cout<<n * *max_element(vec.begin(),vec.end())-accumulate(vec.begin(),vec.end(),0);
}
