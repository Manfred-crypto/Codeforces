#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;string s;
   cin>>n;
   map<string,int> ioi;
   while(n--){
      cin>>s;
      if(!(ioi.contains(s))){cout<<"OK";ioi[s]=1;}
      else{cout<<s<<ioi[s];ioi[s]++;}
      cout<<endl;
   }
}
