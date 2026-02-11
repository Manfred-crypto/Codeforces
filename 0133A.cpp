#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int kkk=0;
   for(auto&c:s){if(c==57||c==72||c==81){kkk++;break;}}
   if(kkk==0){cout<<"NO";}else{cout<<"YES";}
}
