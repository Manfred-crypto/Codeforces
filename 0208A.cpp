#include<bits/stdc++.h>
using namespace std;
void decip(string s){
   if(s.length()<=2){cout<<s;}else{
      if(s[0]=='W'&&s[1]=='U'&&s[2]=='B'){
         s.erase(0,3);
         if(!(s.empty())){decip(s);}
      }
      else{
         if(s.find("WUB")==string::npos){cout<<s;}
         else{cout<<s.substr(0,s.find("WUB"))<<" ";s.erase(0,s.find("WUB"));decip(s);}
      }
   }
}
int main(){
   string s;
   cin>>s;
   decip(s);
}
