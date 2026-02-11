#include<bits/stdc++.h>
using namespace std;
string italy(string s){
   int n=s.length();string t=s;
   vector<int> v;
   for(int i=0;i<n-1;i++){if(s[i]=='B'&&s[i+1]=='G')v.push_back(i);}
   for(int i=0;i<n;i++){
      if(count(v.begin(),v.end(),i)==1)t[i]='G';
      else if(count(v.begin(),v.end(),i-1)==1)t[i]='B';
      else t[i]=s[i];
   }
   return t;
}
int main(){
   int t;string s;
   cin>>t>>t>>s;
   while(t--)s=italy(s);
   cout<<s;
}
