//97 122 for lowercase, 65 90 for uppercase
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   set<char>war;//QWERTY KEYBOARD war,set,dry lol
   getline(cin,s);
   for(int i=0;i<s.length();i++){
      if(97<=s[i]&&s[i]<=122){war.emplace(s[i]);}
   }
   cout<<war.size();
}
