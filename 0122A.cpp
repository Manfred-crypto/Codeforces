#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   if(to_string(count(s.begin(),s.end(),'4')+count(s.begin(),s.end(),'7')).length()==count(to_string(count(s.begin(),s.end(),'4')+count(s.begin(),s.end(),'7')).begin(),to_string(count(s.begin(),s.end(),'4')+count(s.begin(),s.end(),'7')).end(),'4')+count(to_string(count(s.begin(),s.end(),'4')+count(s.begin(),s.end(),'7')).begin(),to_string(count(s.begin(),s.end(),'4')+count(s.begin(),s.end(),'7')).end(),'7'))cout<<"YES";else cout<<"NO";
}
