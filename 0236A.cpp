#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    auto s1=unique(s.begin(),s.end());
    s.erase(s1,s.end());
    if(s.length()%2==0){cout<<"CHAT WITH HER!";}else{cout<<"IGNORE HIM!";}
}
