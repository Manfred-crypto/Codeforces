#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s>>s;
   if(count(s.begin(),s.end(),'A')>count(s.begin(),s.end(),'D'))cout<<"Anton";if(count(s.begin(),s.end(),'A')==count(s.begin(),s.end(),'D'))cout<<"Friendship";if(count(s.begin(),s.end(),'A')<count(s.begin(),s.end(),'D'))cout<<"Danik";
}
