#include <bits/stdc++.h>
using namespace std;
int main(){
  unsigned char c; string s; bool b=1;
  cin>>c>>s;
  for(unsigned char d:s){
    if(islower(d)){
      b=0; break;
    }
  }
  if(b){
    c=isupper(c)?tolower(c):toupper(c);
    cout<<c;
    for (char&d:s){
      d=isupper(static_cast<unsigned char>(d))?tolower(d):toupper(d);
    }
    cout<<s;
  }else cout<<c<<s;
  return 0;
}
